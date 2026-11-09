namespace ICFTD.AmigaExport;

internal static class Program
{
    /// <summary>Emit the legacy 16-colour planar preview next to the PNGs (see ExportPictures).</summary>
    static bool WriteDosPreview;

    static int Main(string[] args)
    {
        if (args.Length < 2)
        {
            Console.WriteLine("usage: ICFTD.AmigaExport <command> ...");
            Console.WriteLine("  all     <diskDir> <workDir> <gameDir>   every image -> banks, AMIGA.ART, TWIN.ART, SCENE.ART");
            Console.WriteLine("  gamepack <diskDir> <outFile> [-v]      build game.pak for the recompilation");
            Console.WriteLine("  pakinfo <pakFile> [limit]              list the entries of a game.pak");
            Console.WriteLine("  export  <diskDir> <outDir> [--dos]       extract banks and decode them to PNG (+ .idx8);");
            Console.WriteLine("                                         --dos adds the legacy 16-colour planar preview");
            Console.WriteLine("  list    <diskImage>");
            Console.WriteLine("  extract <diskImage> <outDir>");
            return 1;
        }

        string cmd = args[0].ToLowerInvariant();

        switch (cmd)
        {
            case "export":
            {
                string diskDir = args[1], outDir = args[2];
                WriteDosPreview = args.Any(a => a == "--dos");
                Directory.CreateDirectory(outDir);
                ExportDisks(diskDir, outDir);
                ExportBanks(outDir);
                return 0;
            }
            case "all":
            {
                // <diskDir> <workDir> <gameDir>: the whole chain in one call - disk images in,
                // decoded banks and AMIGA.ART in workDir, the runtime packs next to the game.
                string diskDir = args[1], work = args[2], game = args[3];
                Directory.CreateDirectory(work);
                Directory.CreateDirectory(game);
                ExportDisks(diskDir, work);
                ExportBanks(work);

                var banks = BankFiles(work);
                string artDir = Path.Combine(work, "art");
                byte[] rgb = WriteGlobal(banks, artDir, out _);
                string pack = Path.Combine(artDir, "AMIGA.ART");
                string csv = Path.ChangeExtension(pack, ".csv");
                int n = Art.Build(banks, rgb, Art.DacImage(rgb), pack, csv);
                Console.WriteLine($"AMIGA.ART: {n} pictures, {new FileInfo(pack).Length / 1024} KB");

                // The two packs PATCH256.COM reads at run time. Missing art is an error here,
                // not a silent skip - a half-built game folder is worse than a stopped build.
                string backs = banks.FirstOrDefault(f => Path.GetFileName(f) == "BACKS")
                               ?? throw new Exception("no BACKS bank extracted");
                Art.BuildSingle(pack, csv, Path.Combine(game, "TWIN.ART"), "BACKS", "TWIN");
                Art.BuildScene(backs, "!B28", rgb, Path.Combine(game, "SCENE.ART"));
                Console.WriteLine($"wrote TWIN.ART and SCENE.ART to {game}");
                return 0;
            }
            case "pack1":
            {
                // <pack.art> <manifest.csv> <out.art> <bank> <name>: one picture as its own pack.
                Art.BuildSingle(args[1], args[2], args[3], args[4], args[5]);
                return 0;
            }
            case "list":
            case "extract":
            {
                var adf = new Adf(args[1]);
                var fs = new AmigaFs(adf);
                Console.WriteLine($"{Path.GetFileName(args[1])}: {adf.BlockCount} blocks, {(adf.Ffs ? "FFS" : "OFS")}");
                var root = fs.ReadRoot();
                if (cmd == "list") { Print(root, ""); return 0; }
                if (args.Length < 3) { Console.WriteLine("missing outDir"); return 1; }
                int files = 0;
                Extract(fs, root, args[2], ref files);
                Console.WriteLine($"extracted {files} files to {args[2]}");
                return 0;
            }
            case "bank":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                Console.WriteLine($"entries={bank.Entries.Count} base={bank.Base}");
                foreach (var e in bank.Entries)
                    Console.WriteLine($"  {e.Name,-16} off {e.Offset,8} size {e.Size,8} abs {e.AbsOffset,8}  head {Head(bank.Data, e.AbsOffset)}");
                return 0;
            }
            case "lztry":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                var e = bank.Find(args[2]) ?? throw new Exception($"no resource {args[2]}");
                var bytes = bank.Slice(e);
                int declared = (bytes[4] << 16) | (bytes[5] << 8) | bytes[6];
                Console.WriteLine($"== {e.Name} {bytes.Length} bytes, declared {declared}");
                for (int start = 2; start <= 9; start++)
                    foreach (bool litOne in new[] { true, false })
                        foreach (bool msb in new[] { true, false })
                            foreach (var (ob, lb, bias) in new[] { (12, 4, 3), (12, 4, 2), (11, 5, 3), (12, 4, 1), (13, 3, 3), (14, 2, 1), (10, 6, 3) })
                            {
                                var dec = Lz.Lzss(bytes, start, 1 << 17, litOne, msb, ob, lb, bias);
                                if (LooksKnown(dec))
                                    Console.WriteLine($"LZSS start={start} lit={(litOne ? 1 : 0)} msb={(msb ? 1 : 0)} {ob}/{lb}+{bias}  " + Lz.Describe(dec, 48));
                            }
                foreach (int st in new[] { 4, 6, 7, 8 })
                    foreach (int bias in new[] { 3, 2, 1 })
                        foreach (int offB in new[] { 1, 0 })
                        {
                            var dec2 = Lz.TokenRun(bytes, st, 1 << 17, bias, offB, 12);
                            if (Math.Abs(dec2.Length - declared) <= 2)
                                Console.WriteLine($"RUN start={st} +{bias} off+{offB}  " + Lz.Describe(dec2, 64));
                        }
                return 0;
            }
            case "lz":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                var e = bank.Find(args[2]) ?? throw new Exception($"no resource {args[2]}");
                var bytes = bank.Slice(e);
                var dec = Lz.Unpack(bytes, out string note);
                if (dec is null) { Console.WriteLine($"{e.Name}: not an LZ record ({note})"); return 1; }
                File.WriteAllBytes(args[3], dec);
                Console.WriteLine($"{e.Name}: {bytes.Length} -> {dec.Length} bytes {note}");
                DumpHex(dec, Math.Min(48, dec.Length));
                return 0;
            }
            case "sms":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                var e = bank.Find(args[2]) ?? throw new Exception($"no resource {args[2]}");
                var bytes = bank.Slice(e);
                var dec = Lz.Unpack(bytes, out _) ?? bytes;
                var pic = Sms.Decode(dec);
                if (pic is null) { Console.WriteLine($"{e.Name}: not a decodable SMS record"); return 1; }
                Directory.CreateDirectory(args[3]);
                string baseName = Path.GetFileNameWithoutExtension(args[1]) + "_" + e.Name;
                Png.Write(Path.Combine(args[3], baseName + ".png"), pic.Width, pic.Height, pic.Indices, pic.Palette);
                Console.WriteLine($"{e.Name}: {pic.Width}x{pic.Height} {pic.Planes} planes, {pic.Colours} colours, {pic.Note}");
                return 0;
            }
            case "pics":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                ExportPictures(bank, args[2], Path.GetFileNameWithoutExtension(args[1]), verbose: true);
                return 0;
            }
            case "codec":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                var e = bank.Find(args[2]) ?? throw new Exception($"no resource {args[2]}");
                var rec = Lz.Unpack(bank.Slice(e), out _) ?? bank.Slice(e);
                int w = (rec[8] << 8) | rec[9], h = (rec[10] << 8) | rec[11];
                int planes = rec[16] & 0x0F;
                if (planes == 0) planes = 5;
                int start = args.Length > 3 ? int.Parse(args[3]) : Sms.HeaderSize + Sms.PaletteSize;
                var px = Codec.Decode(rec, start, w * h, (1 << planes) - 1, out int used);
                var pal = new byte[(1 << planes) * 3];
                Buffer.BlockCopy(rec, Sms.HeaderSize, pal, 0, Math.Min(pal.Length, Math.Min(Sms.PaletteSize, rec.Length - Sms.HeaderSize)));
                Directory.CreateDirectory(args[4]);
                Png.Write(Path.Combine(args[4], Path.GetFileNameWithoutExtension(args[1]) + "_" + e.Name + ".png"), w, h, px, pal);
                Console.WriteLine($"{e.Name}: {w}x{h} p{planes}, codec used {used} of {(rec.Length - start) * 8} bits");
                return 0;
            }
            case "scene":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                int cw = args.Length > 3 ? int.Parse(args[3]) : 320;
                int ch = args.Length > 4 ? int.Parse(args[4]) : 200;
                var canvas = Sms.Compose(bank, BankPalette(bank), cw, ch, out string log,
                                         useDescriptorPos: args.Length > 5 && args[5] == "xy");
                Directory.CreateDirectory(args[2]);
                string name = Path.GetFileNameWithoutExtension(args[1]);
                var pal = BankPalette(bank) ?? Png.GreyRamp(32);
                Png.Write(Path.Combine(args[2], name + "_scene.png"), cw, ch, canvas.Indices, pal);
                File.WriteAllBytes(Path.Combine(args[2], name + "_scene.idx8"), canvas.Indices);
                Console.WriteLine(log);
                Console.WriteLine($"wrote {name}_scene.png ({cw}x{ch})");
                return 0;
            }
            case "pack":
            {
                // <bank> <outDir> [name]: 8-bit overlay for PATCH256, Amiga palette at 16..
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                var scene = Sms.Compose(bank, BankPalette(bank), Ovl.Width, Ovl.Height, out _, false);
                var file = Ovl.Build(scene, out int colours, out byte[] pal6);
                Directory.CreateDirectory(args[2]);
                string name = args.Length > 3 ? args[3] : Path.GetFileNameWithoutExtension(args[1]).ToUpperInvariant();
                File.WriteAllBytes(Path.Combine(args[2], name + ".OVL"), file);

                var img = new byte[Ovl.Width * Ovl.Height];
                Buffer.BlockCopy(file, Ovl.ImageOff, img, 0, img.Length);
                Png.Write(Path.Combine(args[2], name + ".ovl.png"), Ovl.Width, Ovl.Height, img, Ovl.PreviewPalette(pal6));
                Console.WriteLine($"{name}.OVL: {file.Length} bytes, {colours} colours at DAC {Ovl.PaletteBase}..{Ovl.PaletteBase + colours - 1}");
                return 0;
            }
            case "sceneart":
            {
                // <bank> <record> <rgbFile> <out>: 768-byte DAC + one 320x200 picture.
                var global = File.ReadAllBytes(args[3]);
                Art.BuildScene(args[1], args[2], global, args[4]);
                Console.WriteLine($"{Path.GetFileName(args[4])}: {new FileInfo(args[4]).Length} bytes ({args[2]})");
                return 0;
            }
            case "smsinfo":
            {
                // <bank> <record...>: how the engine's loader reads these records.
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                foreach (string name in args.Skip(2))
                {
                    var e = bank.Find(name) ?? throw new Exception($"no resource {name}");
                    var rec = Lz.Unpack(bank.Slice(e), out _) ?? bank.Slice(e);
                    Console.WriteLine($"{e.Name,-14} {rec.Length,7}B  {Sms.Describe(rec)}");
                }
                return 0;
            }
            case "handles":
            {
                // <bank...> [want=hex,hex,...]: every record with the handle words it holds.
                var want = new HashSet<int>();
                foreach (string a in args.Skip(1).Where(x => x.StartsWith("want=", StringComparison.OrdinalIgnoreCase)))
                    foreach (string s in a.Substring(5).Split(',', StringSplitOptions.RemoveEmptyEntries))
                        want.Add(Convert.ToInt32(s, 16));
                foreach (string path in args.Skip(1).Where(x => !x.StartsWith("want=", StringComparison.OrdinalIgnoreCase)))
                {
                    ResBank bank;
                    try { bank = new ResBank(File.ReadAllBytes(path)); } catch { continue; }
                    string bn = Path.GetFileNameWithoutExtension(path);
                    foreach (var e in bank.Entries)
                    {
                        var bytes = bank.Slice(e);
                        var dec = Lz.Unpack(bytes, out string lzNote) ?? bytes;
                        var pic = Sms.Decode(dec, BankPalette(bank));
                        int h32 = dec.Length >= 8 ? (dec[4] << 24) | (dec[5] << 16) | (dec[6] << 8) | dec[7] : -1;
                        int h16be = dec.Length >= 6 ? (dec[4] << 8) | dec[5] : -1;
                        int h16le = dec.Length >= 6 ? dec[5] << 8 | dec[4] : -1;
                        bool hit = want.Count == 0
                                   || want.Contains(h32) || want.Contains(h16be) || want.Contains(h16le);
                        if (!hit) continue;
                        Console.WriteLine($"{bn,-8} {e.Name,-14} raw {bytes.Length,7} dec {dec.Length,7} {(lzNote == "raw" ? "raw" : "lz ")} " +
                                          $"{(pic is null ? "-" : $"{pic.Width}x{pic.Height}p{pic.Planes}")} " +
                                          $"h32={h32:X4} hbe={h16be:X4} hle={h16le:X4}  b4..11=" +
                                          string.Join(' ', dec.Skip(4).Take(8).Select(x => x.ToString("X2"))));
                    }
                }
                return 0;
            }
            case "gamepack":
            {
                // <diskDir> <outFile> [-v]: build game.pak from the floppy images.
                bool verbose = args.Any(a => a == "-v");
                int n = Pack.Build(args[1], args[2], out string report, verbose);
                Console.Write(report);
                return n > 0 ? 0 : 1;
            }
            case "movedump":
            {
                // <pakFile> [nameFilter] [maxCommands]: print every MovE script's structure.
                var d = File.ReadAllBytes(args[1]);
                if (BitConverter.ToUInt32(d, 0) != Pack.Magic) throw new Exception("not a game.pak");
                int count = BitConverter.ToUInt16(d, 6);
                int entriesAt = (int)BitConverter.ToUInt32(d, 8);
                int namesAt = (int)BitConverter.ToUInt32(d, 0x10);
                int namesSize = (int)BitConverter.ToUInt32(d, 0x14);
                var names = new List<string>();
                for (int p = namesAt; p < namesAt + namesSize;)
                {
                    int end = Array.IndexOf(d, (byte)0, p);
                    if (end < 0) break;
                    names.Add(System.Text.Encoding.ASCII.GetString(d, p, end - p));
                    p = end + 1;
                }

                string filter = args.Length > 2 ? args[2] : "";
                int maxCmd = args.Length > 3 ? int.Parse(args[3]) : 8;
                int ok = 0, bad = 0;
                for (int i = 0; i < count; i++)
                {
                    int o = entriesAt + i * 16;
                    int off = (int)BitConverter.ToUInt32(d, o + 4);
                    int size = (int)BitConverter.ToUInt32(d, o + 8);
                    if (d[o + 12] != Pack.TypeScript) continue;
                    string name = i < names.Count ? names[i] : "?";
                    if (filter != "" && !name.Contains(filter, StringComparison.OrdinalIgnoreCase)) continue;
                    var body = d.AsSpan(off, size).ToArray();
                    var script = MoveScript.Parse(body, out string error);
                    if (script is null) { Console.WriteLine($"{name}: PARSE FAILED - {error}"); bad++; }
                    else
                    {
                        Console.Write(script.Dump(name, maxCmd));
                        if (error != "") Console.WriteLine($"    ! {error}");
                        ok++;
                    }
                }
                Console.WriteLine($"scripts: {ok} parsed, {bad} failed");
                return bad == 0 ? 0 : 1;
            }
            case "pakinfo":
            {
                // <pakFile> [limit]: list the entry table.
                int limit = args.Length > 2 ? int.Parse(args[2]) : 0;
                Console.Write(Pack.Info(args[1], limit));
                return 0;
            }
            case "hunk":
            {
                // <exe> <outDir> [baseHex]: flatten an Amiga hunk exe for the Ghidra import.
                int baseAddr = args.Length > 3 ? Convert.ToInt32(args[3], 16) : 0;
                var hunk = new Hunk(File.ReadAllBytes(args[1]));
                hunk.Parse(baseAddr);
                foreach (string line in hunk.Log) Console.WriteLine(line);
                Directory.CreateDirectory(args[2]);
                string stem = Path.Combine(args[2], Path.GetFileNameWithoutExtension(args[1]).ToLowerInvariant());
                File.WriteAllBytes(stem + ".img", hunk.Image());
                File.WriteAllText(stem + ".sym", hunk.SymbolFile());
                File.WriteAllText(stem + ".rel", hunk.RelocFile());
                File.WriteAllText(stem + ".hunks.txt", string.Join(Environment.NewLine, hunk.Log) + Environment.NewLine);
                foreach (string line in hunk.Log) Console.WriteLine(line);
                Console.WriteLine($"wrote {stem}.img / .sym / .rel");
                return 0;
            }
            case "stats":
            {
                // <dir of extracted banks>: distinct colours across the whole game.
                var files = Directory.GetFiles(args[1], "*", SearchOption.AllDirectories)
                                     .Where(f => !f.Contains($"{Path.DirectorySeparatorChar}png{Path.DirectorySeparatorChar}"))
                                     .OrderBy(f => f).ToList();
                var st = Stats.Run(files);
                foreach (var kv in st.PerBankColours) Console.WriteLine($"  {kv.Key,-12} {kv.Value,4} colours");
                Console.WriteLine($"{st.Pictures} pictures, {st.Pixels} pixels ({st.Pixels / 1024} KB 8-bit)");
                Console.WriteLine($"distinct colours in the whole game: {st.Merged.Count / 3}");
                foreach (int tol in new[] { 4, 8, 12, 16, 24 })
                {
                    var c = Stats.Cluster(st.Merged, tol, out _);
                    Console.WriteLine($"  clustered at tolerance {tol,2}: {c.Count / 3} colours (budget 240)");
                }
                var usage = Stats.ByUsage(st);
                long total = usage.Sum(kv => kv.Value), acc = 0;
                Console.WriteLine($"pixel-weighted coverage (216-entry global palette):");
                for (int i = 0; i < usage.Count; i++)
                {
                    acc += usage[i].Value;
                    if (i + 1 is 64 or 128 or 192 or 216 or 240 or 255)
                        Console.WriteLine($"  top {i + 1,3} colours = {100.0 * acc / total,6:F2}% of all pixels");
                }
                foreach (double want in new[] { 0.99, 0.999, 0.9999 })
                {
                    acc = 0;
                    for (int i = 0; i < usage.Count; i++)
                    {
                        acc += usage[i].Value;
                        if ((double)acc / total >= want) { Console.WriteLine($"  {want * 100,6:F2}% of pixels need {i + 1} colours"); break; }
                    }
                }
                return 0;
            }
            case "global":
            {
                // <dir of extracted banks> <outDir>: the one palette the whole game shares.
                var rgb = WriteGlobal(BankFiles(args[1]), args[2], out var st);

                long total = st.Pixels, hit = 0;
                var exact = new HashSet<int>(Enumerable.Range(0, rgb.Length / 3).Select(i => (rgb[i * 3] << 16) | (rgb[i * 3 + 1] << 8) | rgb[i * 3 + 2]));
                foreach (var kv in st.Weight) if (exact.Contains(kv.Key)) hit += kv.Value;
                Console.WriteLine($"{rgb.Length / 3} colours, DAC {Art.PaletteBase}..{Art.PaletteBase + rgb.Length / 3 - 1}; " +
                                  $"exact for {100.0 * hit / total:F2}% of {total} pixels");
                return 0;
            }
            case "art":
            {
                // <rgbFile> <outFile> <bankFile...>: one handle-keyed pack for the whole game.
                var global = File.ReadAllBytes(args[1]);
                string manifest = Path.ChangeExtension(args[2], ".csv");
                int n = Art.Build(args.Skip(3), global, Art.DacImage(global), args[2], manifest);
                Console.WriteLine($"{Path.GetFileName(args[2])}: {n} pictures, {new FileInfo(args[2]).Length / 1024} KB " +
                                  $"(manifest {Path.GetFileName(manifest)})");
                return 0;
            }
            case "rawpng":
            {
                // <bin> <offsetHex> <w> <h> <out.png>: render an 8-bit frame from a memory dump.
                var bytes = File.ReadAllBytes(args[1]);
                int off = Convert.ToInt32(args[2], 16);
                int w = int.Parse(args[3]), h = int.Parse(args[4]);
                var px = new byte[w * h];
                Buffer.BlockCopy(bytes, off, px, 0, px.Length);
                Png.Write(args[5], w, h, px, DosPlanar.VgaPalette);
                Console.WriteLine($"wrote {args[5]}");
                return 0;
            }
            case "res":
            {                var bank = new ResBank(File.ReadAllBytes(args[1]));
                var e = bank.Find(args[2]) ?? throw new Exception($"no resource {args[2]}");
                var bytes = bank.Slice(e);
                File.WriteAllBytes(args[3], bytes);
                Console.WriteLine($"{e.Name}: {bytes.Length} bytes -> {args[3]}");
                return 0;
            }
            case "hex":
            {
                var bank = new ResBank(File.ReadAllBytes(args[1]));
                var e = bank.Find(args[2]) ?? throw new Exception($"no resource {args[2]}");
                var bytes = bank.Slice(e);
                int n = Math.Min(bytes.Length, args.Length > 3 ? int.Parse(args[3]) : 256);
                for (int r = 0; r < n; r += 16)
                {
                    var line = string.Join(' ', bytes.Skip(r).Take(Math.Min(16, n - r)).Select(x => x.ToString("X2")));
                    var txt = new string(bytes.Skip(r).Take(Math.Min(16, n - r))
                        .Select(x => x >= 32 && x < 127 ? (char)x : '.').ToArray());
                    Console.WriteLine($"{r:X4}  {line,-47}  |{txt}|");
                }
                return 0;
            }
            default:
                Console.WriteLine($"unknown command {cmd}");
                return 1;
        }
    }

    static bool LooksKnown(byte[] d)
    {
        if (d.Length < 4) return false;
        bool sms = d[0] == 'S' && d[1] == 'M' && d[2] == 'S';
        bool mov = d[0] == 'M' && d[1] == 'o' && d[2] == 'v' && d[3] == 'E';
        return sms || mov;
    }

    /// <summary>Extracted bank files of a directory tree, skipping the rendered PNG output.</summary>
    static List<string> BankFiles(string dir) =>
        Directory.GetFiles(dir, "*", SearchOption.AllDirectories)
                 .Where(f => !f.Contains($"{Path.DirectorySeparatorChar}png{Path.DirectorySeparatorChar}"))
                 .OrderBy(f => f).ToList();

    /// <summary>
    /// Floppy images in a folder, in file-name order. The name carries no meaning, so the only
    /// test is the size of a raw 880K Amiga disk (a multiple of 512 bytes) - that skips readmes.
    /// </summary>
    static List<string> DiskImages(string dir) =>
        Directory.GetFiles(dir)
                 .Where(f => new FileInfo(f).Length >= 100 * Adf.BlockSize
                             && new FileInfo(f).Length % Adf.BlockSize == 0)
                 .OrderBy(f => Path.GetFileName(f), StringComparer.OrdinalIgnoreCase)
                 .ToList();

    /// <summary>Extracts every floppy image in <paramref name="diskDir"/> into its own subfolder.</summary>
    static void ExportDisks(string diskDir, string outDir)
    {
        var images = DiskImages(diskDir);
        if (images.Count == 0) throw new Exception($"no Amiga disk images found in {diskDir}");
        for (int i = 0; i < images.Count; i++)
        {
            string path = images[i];
            // Numbered, not named: the file name says nothing about the disk and a fixed
            // numbering keeps the extracted tree (and everything built from it) reproducible.
            string label = $"disk{i + 1}";
            var fs = new AmigaFs(new Adf(path));
            int files = 0;
            Extract(fs, fs.ReadRoot(), Path.Combine(outDir, label), ref files);
            Console.WriteLine($"{Path.GetFileName(path)} -> {label}/: {files} files");
        }
    }

    /// <summary>Decodes every resource bank of an extracted tree to PNG plus index and palette files.</summary>
    static void ExportBanks(string outDir)
    {
        foreach (string file in Directory.GetFiles(outDir, "*", SearchOption.AllDirectories))
        {
            if (file.Contains(Path.Combine(outDir, "png"))) continue;
            byte[] data;
            try { data = File.ReadAllBytes(file); } catch { continue; }
            if (data.Length < 8) continue;
            ResBank bank;
            try { bank = new ResBank(data); } catch { continue; }
            if (bank.Entries.Count == 0 || bank.Base > data.Length) continue;
            ExportPictures(bank, Path.Combine(outDir, "png", Path.GetFileName(file)), Path.GetFileName(file));
        }
    }

    /// <summary>Writes AMIGA.RGB/DAC/PAL for a set of banks and returns the palette.</summary>
    static byte[] WriteGlobal(List<string> banks, string outDir, out Stats.Result st)
    {
        st = Stats.Run(banks);
        var rgb = Stats.GlobalPalette(st, 216);
        Directory.CreateDirectory(outDir);
        File.WriteAllBytes(Path.Combine(outDir, "AMIGA.RGB"), rgb);
        File.WriteAllBytes(Path.Combine(outDir, "AMIGA.DAC"), Art.DacImage(rgb));
        WriteJascPal(Path.Combine(outDir, "AMIGA.PAL"), rgb);
        return rgb;
    }

    static bool HasText(byte[] d)
    {
        int run = 0;
        foreach (byte x in d.Take(4096))
        {
            bool printable = x >= 0x20 && x < 0x7F;
            run = printable ? run + 1 : 0;
            if (run >= 5) return true;
        }
        return false;
    }

    /// <summary>
    /// Decodes every bitmap of a bank to PNG plus an 8-bit index dump and its palette.
    /// <see cref="WriteDosPreview"/> additionally emits the 16-colour planar form that the
    /// original MS-DOS build's EGA-style renderer needed; the recompilation uses the 8-bit
    /// chunky pictures, so that output is off unless asked for.
    /// </summary>
    static void ExportPictures(ResBank bank, string dir, string bankName, bool verbose = false)
    {
        Directory.CreateDirectory(dir);
        byte[]? bankPal = BankPalette(bank);
        if (bankPal is not null) WriteJascPal(Path.Combine(dir, bankName + ".pal"), bankPal);

        int ok = 0, bad = 0;
        foreach (var e in bank.Entries)
        {
            var bytes = bank.Slice(e);
            var dec = Lz.Unpack(bytes, out _) ?? bytes;
            var pic = Sms.Decode(dec, bankPal);
            if (pic is null) { bad++; continue; }
            string safe = Safe(e.Name);
            File.WriteAllBytes(Path.Combine(dir, safe + ".idx8"), pic.Indices);
            Png.Write(Path.Combine(dir, safe + ".png"), pic.Width, pic.Height, pic.Indices, pic.Palette);

            if (WriteDosPreview)
            {
                // Legacy: nearest of the 16 VGA colours, four bitplanes - what the DOS game's
                // own renderer used. Lossy by design and not used by this project.
                var planes = DosPlanar.Pack(pic.Indices, pic.Palette, pic.Width, pic.Height);
                File.WriteAllBytes(Path.Combine(dir, safe + ".pl4"), planes);
                var back = DosPlanar.Unpack(planes, pic.Width, pic.Height);
                Png.Write(Path.Combine(dir, safe + ".dos.png"), pic.Width, pic.Height, back, DosPlanar.VgaPalette);
            }
            if (verbose)
                Console.WriteLine($"  {e.Name,-18} {pic.Width,4}x{pic.Height,-4} p{pic.Planes} {pic.Colours,3} cols  {pic.Note}  ({bytes.Length} -> {dec.Length})");
            ok++;
        }
        Console.WriteLine($"  {bankName}: {ok} bitmaps, {bad} other records");
    }

    static string Safe(string name) =>
        string.Concat(name.Select(ch => Path.GetInvalidFileNameChars().Contains(ch) ? '_' : ch));

    internal static byte[]? PaletteOfPublic(byte[] rec) => PaletteOf(rec);

    internal static byte[]? BankPalettePublic(ResBank bank) => BankPalette(bank);

    static void WriteJascPal(string path, byte[] rgb)
    {
        using var w = new StreamWriter(path);
        w.WriteLine("JASC-PAL");
        w.WriteLine("0100");
        w.WriteLine(rgb.Length / 3);
        for (int i = 0; i < rgb.Length; i += 3) w.WriteLine($"{rgb[i]} {rgb[i + 1]} {rgb[i + 2]}");
    }

    /// <summary>Palette of a bank: "main.pal" when present, else the first "*.pal" record.</summary>
    static byte[]? BankPalette(ResBank bank)
    {
        var pals = bank.Entries.Where(x => x.Name.EndsWith(".pal", StringComparison.OrdinalIgnoreCase)).ToList();
        if (pals.Count == 0) return null;
        var e = pals.FirstOrDefault(x => x.Name.Equals("main.pal", StringComparison.OrdinalIgnoreCase)) ?? pals[0];
        return PaletteOf(bank.Slice(e));
    }

    /// <summary>Colour triples of a "*.pal" record; the SMS header may sit at 0 or after a 6-byte id.</summary>
    static byte[]? PaletteOf(byte[] rec)
    {
        int start = rec.Length > 6 && rec[0] == 'S' && rec[1] == 'M' && rec[2] == 'S' ? Sms.HeaderSize
                  : rec.Length > 6 + Sms.HeaderSize && rec[6] == 'S' && rec[7] == 'M' && rec[8] == 'S' ? 6 + Sms.HeaderSize
                  : -1;
        if (start < 0 || rec.Length <= start + 48) return null;
        // FUN_0001D87C converts exactly 0x20 colours; the block is 128 bytes (96 of colour,
        // 32 unused) and anything after it is the record's pixel data, not palette.
        int colours = Math.Min(Sms.PaletteColours, (rec.Length - start) / 3);
        var pal = new byte[colours * 3];
        Buffer.BlockCopy(rec, start, pal, 0, pal.Length);
        return pal;
    }

    static void DumpHex(byte[] bytes, int n)
    {
        for (int r = 0; r < n; r += 16)
        {
            int len = Math.Min(16, n - r);
            var line = string.Join(' ', bytes.Skip(r).Take(len).Select(x => x.ToString("X2")));
            var txt = new string(bytes.Skip(r).Take(len).Select(x => x >= 32 && x < 127 ? (char)x : '.').ToArray());
            Console.WriteLine($"{r:X4}  {line,-47}  |{txt}|");
        }
    }

    static string Head(byte[] d, int off)
    {
        int n = Math.Min(8, d.Length - off);
        if (n <= 0) return "";
        return string.Join(' ', d.Skip(off).Take(n).Select(x => x.ToString("X2")));
    }

    static void Print(AmigaEntry e, string indent)
    {
        foreach (var c in e.Children.OrderBy(x => x.Name, StringComparer.OrdinalIgnoreCase))
        {
            if (c.IsDir) { Console.WriteLine($"{indent}{c.Name}/  blk {c.Block}"); Print(c, indent + "  "); }
            else Console.WriteLine($"{indent}{c.Name,-24} {c.Size,8}  blk {c.Block} first {c.FirstData}");
        }
    }

    static void Extract(AmigaFs fs, AmigaEntry dir, string outDir, ref int files)
    {
        Directory.CreateDirectory(outDir);
        foreach (var c in dir.Children)
        {
            string safe = string.Concat(c.Name.Select(ch => Path.GetInvalidFileNameChars().Contains(ch) ? '_' : ch));
            if (c.IsDir) { Extract(fs, c, Path.Combine(outDir, safe), ref files); continue; }
            var bytes = fs.ReadFile(c);
            File.WriteAllBytes(Path.Combine(outDir, safe), bytes);
            files++;
        }
    }
}

