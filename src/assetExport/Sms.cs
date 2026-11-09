namespace ICFTD.AmigaExport;

/// <summary>
/// "SMS" record: 26-byte descriptor (size, position, mode = plane count, ...), then either
/// raw planar data or an optional 128-byte palette block followed by RLE'd planes.
/// The RLE escape is 0xAE &lt;value&gt; &lt;count&gt;, repeating value count+1 times.
/// </summary>
internal static class Sms
{
    public const int HeaderSize = 26;
    public const int PaletteSize = 128;

    public sealed class Picture
    {
        public int Width, Height, Planes, Colours;
        public byte[] Indices = Array.Empty<byte>();
        public byte[] Palette = Array.Empty<byte>();   // 3 bytes per colour
        public byte[] Planes8Bit = Array.Empty<byte>();
        public string Note = "";
    }

    public static bool IsSms(byte[] r) => r.Length >= HeaderSize && r[0] == 'S' && r[1] == 'M' && r[2] == 'S';

    public static Picture? Decode(byte[] rec, byte[]? bankPalette = null)
    {
        if (!IsSms(rec)) return null;
        int w = (rec[8] << 8) | rec[9];
        int h = (rec[10] << 8) | rec[11];
        int planes = rec[16] & 0x0F;
        if (planes == 0) planes = 5;
        if (w <= 0 || h <= 0 || w > 700 || h > 500) return null;

        int alignedRow = ((w + 15) / 16) * 2;
        int tightRow = (w + 7) / 8;
        int needAligned = alignedRow * h * planes;
        int needTight = tightRow * h * planes;

        byte[]? data = null;
        int paletteAt = -1;
        string note = "";

        // The palette block sits before the pixel data, and its bytes can parse as a
        // valid RLE stream too, so the longest start wins: palette first, header last.
        var candidates = new List<int> { HeaderSize + 128, HeaderSize };
        if (bankPalette is { Length: > 0 }) candidates.Insert(0, HeaderSize + bankPalette.Length);
        foreach (int start in candidates)
        {
            if (start >= rec.Length) continue;
            var rle = Runs(rec, start);
            if (rle.Length == needAligned) { data = rle; paletteAt = start - HeaderSize; note = "rle/aligned"; break; }
            if (rle.Length == needTight) { data = rle; paletteAt = start - HeaderSize; note = "rle/tight"; break; }
            if (rec.Length - start == needAligned) { data = rec.AsSpan(start).ToArray(); paletteAt = start - HeaderSize; note = "raw/aligned"; break; }
            if (rec.Length - start == needTight) { data = rec.AsSpan(start).ToArray(); paletteAt = start - HeaderSize; note = "raw/tight"; break; }
        }

        if (data is null)
        {
            // A palette block of exactly the bank's size, with a small trailing overshoot.
            int candStart = -1, candOver = 0;
            byte[]? candRle = null;
            foreach (int start in candidates)
            {
                if (start >= rec.Length) continue;
                var rle = Runs(rec, start);
                int over0 = rle.Length - needAligned;
                if (over0 >= 0 && over0 <= 400 && start > candStart) { candStart = start; candOver = over0; candRle = rle; }
            }
            if (candRle is not null)
            {
                data = candRle.AsSpan(0, needAligned).ToArray();
                paletteAt = candStart - HeaderSize;
                note = $"rle/pal{paletteAt} over {candOver}";
            }
        }

        if (data is null)
        {
            // Palette length varies per bank; the right start is the one whose expansion covers
            // the bitmap with the smallest overshoot (any excess is trailing data).
            int bestStart = HeaderSize, bestOver = int.MaxValue;
            byte[]? bestRle = null;
            byte[]? widest = null;
            int widestStart = HeaderSize;
            for (int start = HeaderSize; start <= HeaderSize + 1200 && start < rec.Length; start++)
            {
                var rle = Runs(rec, start);
                int over = rle.Length - needAligned;
                if (over >= 0 && over < bestOver) { bestOver = over; bestStart = start; bestRle = rle; if (over == 0) break; }
                if (widest is null || rle.Length > widest.Length) { widest = rle; widestStart = start; }
            }
            if (bestRle is null) { bestRle = widest; bestStart = widestStart; }
            data = bestRle!;
            paletteAt = bestStart - HeaderSize;
            note = $"rle/pal{paletteAt} over {data.Length - needAligned}";
            if (data.Length > needAligned) data = data.AsSpan(0, needAligned).ToArray();
        }

        if (data is null)
        {
            // Pieces inside a scene bank run longer than one image: expand and clip.
            var rle = Runs(rec, HeaderSize);
            if (rle.Length >= needAligned)
            {
                data = rle.AsSpan(0, needAligned).ToArray();
                note = $"clipped {rle.Length}/{needAligned}";
            }
            else
            {
                data = rle;
                note = $"rle? {data.Length} of {needAligned}/{needTight}";
            }
        }

        int row = (data.Length == needTight && needTight != needAligned) ? tightRow : alignedRow;
        var pic = new Picture { Width = w, Height = h, Planes = planes, Note = note, Planes8Bit = data };

        // Records come in three planar layouts; keep the one that looks like a picture.
        byte[] best = null!;
        long bestScore = long.MaxValue;
        foreach (int layout in new[] { 0, 1, 2 })
        {
            var cand = Unpack(data, w, h, planes, row, layout);
            long score = Smoothness(cand, w, h);
            if (score < bestScore) { bestScore = score; best = cand; }
        }
        pic.Indices = best;

        if (paletteAt >= 3)
        {
            int colours = paletteAt / 3;
            var pal = new byte[colours * 3];
            Buffer.BlockCopy(rec, HeaderSize, pal, 0, pal.Length);
            pic.Palette = pal;
            pic.Colours = colours;
        }
        else
        {
            if (bankPalette is { Length: >= 48 }) { pic.Palette = bankPalette; pic.Colours = bankPalette.Length / 3; }
            else { pic.Palette = Png.GreyRamp(1 << planes); pic.Colours = 1 << planes; }
        }
        return pic;
    }

    /// <summary>Draws every bitmap of a bank at its descriptor position, colour 0 as transparent.</summary>
    public static Picture Compose(ResBank bank, byte[]? bankPalette, int w, int h, out string log, bool useDescriptorPos = false)
    {
        var canvas = new Picture { Width = w, Height = h, Planes = 5, Indices = new byte[w * h] };
        if (bankPalette is not null) canvas.Palette = bankPalette;
        var sb = new System.Text.StringBuilder();
        foreach (var e in bank.Entries)
        {
            if (e.Name.EndsWith(".pal", StringComparison.OrdinalIgnoreCase)) continue;
            var rec = Lz.Unpack(bank.Slice(e), out _) ?? bank.Slice(e);
            var pic = Decode(rec, bankPalette);
            if (pic is null) continue;
            int x = useDescriptorPos ? (rec[12] << 8) | rec[13] : 0;
            int y = useDescriptorPos ? (rec[14] << 8) | rec[15] : 0;
            sb.AppendLine($"  {e.Name,-18} {pic.Width,4}x{pic.Height,-4} at {x},{y}  p{pic.Planes}");
            for (int py = 0; py < pic.Height; py++)
                for (int px = 0; px < pic.Width; px++)
                {
                    int dx = x + px, dy = y + py;
                    if (dx < 0 || dy < 0 || dx >= w || dy >= h) continue;
                    byte v = pic.Indices[py * pic.Width + px];
                    if (v == 0) continue;
                    canvas.Indices[dy * w + dx] = v;
                }
        }
        log = sb.ToString();
        return canvas;
    }

    /// <summary>
    /// Scans every plausible data start of a record and reports the ones that decode to
    /// the smoothest picture - the palette block length varies, so the start has to be found.
    /// </summary>
    public static string Fit(byte[] rec, out int bestStart, out int bestPalette)
    {
        int w = (rec[8] << 8) | rec[9];
        int h = (rec[10] << 8) | rec[11];
        int planes = rec[16] & 0x0F;
        if (planes == 0) planes = 5;
        int row = ((w + 15) / 16) * 2;
        int need = row * h * planes;
        var lines = new System.Text.StringBuilder();
        var best = new List<(long score, int start, bool rowMajor, int length)>();
        for (int start = HeaderSize; start <= HeaderSize + 900 && start < rec.Length; start++)
        {
            var rle = Runs(rec, start);
            if (rle.Length < need) continue;
            foreach (bool rm in new[] { true, false })
            {
                var px = Unpack(rle, w, h, planes, row, rm ? 0 : 1);
                best.Add((Smoothness(px, w, h), start, rm, rle.Length));
            }
        }
        best.Sort((x, y) => x.score.CompareTo(y.score));
        foreach (var b in best.Take(5))
            lines.AppendLine($"  start {b.start,4} pal {b.start - HeaderSize,4} {(b.rowMajor ? "row  " : "colm ")} len {b.length,6} score {b.score / (long)(w * h),4}");
        if (best.Count == 0) { bestStart = -1; bestPalette = 0; return "  no candidate"; }
        bestStart = best[0].start;
        bestPalette = best[0].start - HeaderSize;
        return lines.ToString();
    }

    /// <summary>Ranks data start / layout variants of a record by how flat (picture-like) they are.</summary>
    public static string Probe(byte[] rec, int planes)
    {
        int w = (rec[8] << 8) | rec[9], h = (rec[10] << 8) | rec[11];
        int row = ((w + 15) / 16) * 2;
        var hits = new List<(double edges, int start, int layout, bool msb, bool planeRev)>();
        int[] starts = { 26, 90, 154, 218, 282, 346, 410, 674 };
        foreach (int start in starts)
        {
            if (start >= rec.Length) continue;
            var data = Runs(rec, start);
            if (data.Length < row * h * planes) continue;
            foreach (int layout in new[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 })
                foreach (bool msb in new[] { true, false })
                    foreach (bool rev in new[] { false, true })
                    {
                        long edges = 0, pixels = 0;
                        var prev = new byte[w];
                        var cur = new byte[w];
                        for (int y = 0; y < h; y++)
                        {
                            for (int x = 0; x < w; x++)
                            {
                                int v = 0, bit = msb ? 7 - (x & 7) : (x & 7), col = x >> 3;
                                for (int p = 0; p < planes; p++)
                                {
                                    int pp = rev ? planes - 1 - p : p;
                                    int yy = (layout >= 7) ? ((y & 1) * (h / 2) + (y >> 1)) : y;
                                    int off = (layout switch
                                    {
                                        0 => (pp * row + col) * h + yy,
                                        1 => (pp * h + yy) * row + col,
                                        2 => (yy * planes + pp) * row + col,
                                        3 => (((x >> 4) * h + yy) * planes + pp) * 2 + ((x >> 3) & 1),
                                        4 => (((x >> 4) * planes + pp) * h + yy) * 2 + ((x >> 3) & 1),
                                        5 => ((((x >> 4) * h + yy) * 2 + ((x >> 3) & 1)) * planes) + pp,
                                        6 => (((x >> 4) * planes + pp) * 2 + ((x >> 3) & 1)) * h + yy,
                                        7 => (pp * row + col) * h + yy,
                                        8 => (pp * h + yy) * row + col,
                                        _ => (((((yy >> 4) * (row / 2) + (x >> 4)) * planes + pp) * 16 + (yy & 15)) * 2) + ((x >> 3) & 1),
                                    });
                                    if (off < data.Length && ((data[off] >> bit) & 1) != 0) v |= 1 << p;
                                }
                                cur[x] = (byte)v;
                                if (x > 0 && cur[x] != cur[x - 1]) edges++;
                                pixels++;
                            }
                        }
                        hits.Add(((double)edges / pixels, start, layout, msb, rev));
                    }
        }
        hits.Sort((x, y) => x.edges.CompareTo(y.edges));
        var sb = new System.Text.StringBuilder();
        foreach (var t in hits.Take(10))
            sb.AppendLine($"  start {t.start,4} layout {t.layout} msb {(t.msb ? 1 : 0)} rev {(t.planeRev ? 1 : 0)}  edges {t.edges:P1}");
        return sb.ToString();
    }

    /// <summary>Expands one plane layout to one index per pixel.</summary>
    static byte[] Unpack(byte[] data, int w, int h, int planes, int row, int layout)
    {
        var px = new byte[w * h];
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
            {
                int v = 0, bit = 7 - (x & 7), col = x >> 3;
                for (int p = 0; p < planes; p++)
                {
                    // 1 = plane, byte column, row   2 = byte column, plane, row   0 = plane, row, byte column
                    int off = layout switch
                    {
                        1 => (p * row + col) * h + y,
                        2 => (col * planes + p) * h + y,
                        _ => (p * h + y) * row + col
                    };
                    if (off >= 0 && off < data.Length && ((data[off] >> bit) & 1) != 0) v |= 1 << p;
                }
                px[y * w + x] = (byte)v;
            }
        return px;
    }

    /// <summary>Sum of neighbour differences; a correct decode of artwork scores low.</summary>
    static long Smoothness(byte[] px, int w, int h)
    {
        long sum = 0;
        for (int y = 0; y < h; y++)
            for (int x = 1; x < w; x++)
            {
                int d = px[y * w + x] - px[y * w + x - 1];
                sum += d < 0 ? -d : d;
            }
        return sum;
    }

    /// <summary>Expands the 0xAE escape encoding; a run is value repeated count+1 times.</summary>
    static byte[] Runs(byte[] src, int start)
    {
        var outp = new List<byte>(1 << 16);
        for (int i = start; i < src.Length;)
        {
            if (src[i] == 0xAE && i + 2 < src.Length)
            {
                byte v = src[i + 1];
                int count = src[i + 2] + 1;
                for (int k = 0; k < count; k++) outp.Add(v);
                i += 3;
            }
            else outp.Add(src[i++]);
        }
        return outp.ToArray();
    }
}








