namespace ICFTD.AmigaExport;

/// <summary>
/// "SMS" picture record, decoded exactly the way the original engine does it:
/// <c>FUN_0001EC42</c> reads the descriptor and <c>FUN_0002011A</c> walks the plane data
/// (both in <c>dshell.rel</c>, disassembly in <c>re\disasm\dshell.asm</c>).
///
/// <code>
///   +0   'SMS' + version byte   tag; compared against 0x534D5300 | version
///   +4   u32  bytes left in the record
///   +6   u16  width             (FUN_000204fa reads 4 + 0x16 bytes into a 22 byte header)
///   +8   u16  height
///   +10  u16  descriptor word 0
///   +12  u16  descriptor word 1
///   +16  u8   plane count
///   +17  u8   flags (not used by the loader)
///   +18  u16  (not used by the loader)
///   +20  u32  plane mask: one nibble per plane, least significant nibble first
///   +24  u16  palette flag: high byte != 0 -> a 128 byte palette follows
///   +26  palette: 32 colours of 3 bytes (R = high nibble of byte 0, G = high nibble
///        of byte 1, B = low nibble of byte 2 - see FUN_0001D87C) + 32 unused bytes
///   +154 run length encoded plane data, escape 0xAE value (count - 1)
/// </code>
///
/// A mask nibble of 8 or 0xC means "plane not stored, all bits 0"; 0xD means "not stored,
/// all bits 1"; every other nibble marks a stored plane.  The stored planes follow each
/// other in the stream, each filling <c>RowBytes(w) * height</c> bytes, and the stream is
/// walked in one of two orders, chosen by the low byte of the palette flag:
///
/// <code>
///   low byte == 0 :  for byte column, for plane, for row     (FUN_0002011A 0x20184)
///   low byte != 0 :  for plane, for byte column, for row     (FUN_0002011A 0x20146)
/// </code>
///
/// Within a byte column the stride is <c>RowBytes(w)</c>, so a record stores its planes
/// column major and the engine deposits them straight into row major Amiga bitplanes.
/// </summary>
internal static class Sms
{
    public const int HeaderSize = 26;
    public const int PaletteSize = 128;
    public const int PaletteColours = 32;      // 96 bytes of colour, 32 bytes unused
    public const byte RleEscape = 0xAE;

    public sealed class Picture
    {
        public int Width, Height, Planes, Colours;
        public int HotX, HotY;                         /* header words at +12 / +14 */
        public byte[] Indices = Array.Empty<byte>();
        public byte[] Palette = Array.Empty<byte>();   // 3 bytes per colour, nibble << 4
        public byte[] Planes8Bit = Array.Empty<byte>();
        public string Note = "";
    }

    public static bool IsSms(byte[] r) => r.Length >= HeaderSize && r[0] == 'S' && r[1] == 'M' && r[2] == 'S';

    public static int Be16(byte[] d, int o) => (d[o] << 8) | d[o + 1];
    public static int Be32(byte[] d, int o) => (d[o] << 24) | (d[o + 1] << 16) | (d[o + 2] << 8) | d[o + 3];

    /// <summary>Bytes per byte-column of one plane, exactly as FUN_0001EC42 computes it.</summary>
    public static int RowBytes(int w)
    {
        int r = w;
        if ((r & 7) != 0) r += 8;
        if ((r & 0x0800) != 0) r += 8;
        return r >> 3;
    }

    /// <summary>Human readable reading of a record header; used by the <c>smsinfo</c> command.</summary>
    public static string Describe(byte[] rec)
    {
        if (!IsSms(rec)) return "not an SMS record";
        int w = Be16(rec, 8), h = Be16(rec, 10);
        int planes = rec[16];
        uint mask = (uint)Be32(rec, 20);
        int palFlag = Be16(rec, 24);
        bool hasPalette = (palFlag & 0xFF00) != 0;
        var sb = new System.Text.StringBuilder();
        sb.Append($"{w}x{h} planes={planes} mask={mask:X8} palFlag={palFlag:X4} ");
        sb.Append(hasPalette ? "palette " : "no palette ");
        int stored = 0;
        for (int i = 0; i < planes && i < 8; i++)
        {
            int nib = (int)((mask >> (4 * i)) & 0xF);
            sb.Append($"p{i}={(nib == 8 || nib == 0xC ? "zero" : nib == 0xD ? "ones" : "#" + stored++)} ");
        }
        int row = RowBytes(w);
        int dataAt = HeaderSize + (hasPalette ? PaletteSize : 0);
        sb.Append($"rowBytes={row} data={stored * row * h}B at +{dataAt} ");
        sb.Append((palFlag & 0xFF) == 0 ? "[column,plane,row]" : "[plane,column,row]");
        return sb.ToString();
    }

    /// <summary>
    /// Decodes one record. <paramref name="bankPalette"/> is used when the record carries no
    /// palette of its own - the engine then simply keeps whatever palette is installed.
    /// </summary>
    public static Picture? Decode(byte[] rec, byte[]? bankPalette = null)
    {
        if (!IsSms(rec) || rec.Length < HeaderSize) return null;
        int w = Be16(rec, 8), h = Be16(rec, 10);
        int planes = rec[16];
        if (w <= 0 || h <= 0 || w > 700 || h > 500) return null;
        if (planes == 0 || planes > 8) return null;

        int palFlag = Be16(rec, 24);
        bool hasPalette = (palFlag & 0xFF00) != 0;

        var pic = new Picture { Width = w, Height = h, Planes = planes, Indices = new byte[w * h] };
        pic.HotX = (short)Be16(rec, 12);
        pic.HotY = (short)Be16(rec, 14);

        // Palette: 32 colours of 3 bytes, each component in the high nibble of its byte.
        if (hasPalette)
        {
            int colours = Math.Min(PaletteColours, 1 << planes);
            var pal = new byte[colours * 3];
            for (int i = 0; i < colours; i++)
            {
                pal[i * 3 + 0] = (byte)(rec[HeaderSize + i * 3 + 0] & 0xF0);
                pal[i * 3 + 1] = (byte)(rec[HeaderSize + i * 3 + 1] & 0xF0);
                pal[i * 3 + 2] = (byte)(rec[HeaderSize + i * 3 + 2] & 0xF0);
            }
            pic.Palette = pal;
            pic.Colours = colours;
        }
        else if (bankPalette is { Length: >= 48 })
        {
            pic.Palette = bankPalette;
            pic.Colours = bankPalette.Length / 3;
        }
        else
        {
            pic.Palette = Png.GreyRamp(1 << planes);
            pic.Colours = 1 << planes;
        }

        // A 1x1 record is a palette carrier such as Blast.pal: the engine skips the unpacker
        // unless width or height is bigger than 1.
        if (w <= 1 && h <= 1) { pic.Note = "descriptor only"; return pic; }

        // Plane mask -> which planes are stored and what the others are filled with.
        uint mask = (uint)Be32(rec, 20);
        var slot = new int[planes];
        var constant = new byte[planes];
        int storedPlanes = 0;
        for (int i = 0; i < planes; i++)
        {
            int nib = (int)((mask >> (4 * i)) & 0xF);
            if (nib == 8 || nib == 0xC) { slot[i] = -1; constant[i] = 0x00; }
            else if (nib == 0xD) { slot[i] = -1; constant[i] = 0xFF; }
            else { slot[i] = storedPlanes++; constant[i] = 0; }
        }

        int row = RowBytes(w);
        int planeSize = row * h;
        var bits = new byte[storedPlanes * planeSize + 8];
        int total = storedPlanes * planeSize;
        bool planeMajor = (palFlag & 0xFF) != 0;
        int dataAt = HeaderSize + (hasPalette ? PaletteSize : 0);

        int src = dataAt, written = 0, p = 0, col = 0, y = 0;
        while (written < total)
        {
            if (src >= rec.Length) break;
            byte v = rec[src++];
            int count = 1;
            if (v == RleEscape)
            {
                if (src + 1 >= rec.Length) break;
                v = rec[src++];
                count = rec[src++] + 1;
            }
            for (int k = 0; k < count && written < total; k++)
            {
                bits[p * planeSize + y * row + col] = v;
                written++;
                if (++y == h)
                {
                    y = 0;
                    if (planeMajor) { if (++col == row) { col = 0; p++; } }
                    else { if (++p == storedPlanes) { p = 0; col++; } }
                }
            }
        }
        if (written < total) pic.Note = $"short {written}/{total}";

        for (int py = 0; py < h; py++)
            for (int px = 0; px < w; px++)
            {
                int c = px >> 3, bit = 7 - (px & 7), v = 0;
                for (int i = 0; i < planes; i++)
                {
                    int on = slot[i] >= 0
                        ? (bits[slot[i] * planeSize + py * row + c] >> bit) & 1
                        : (constant[i] >> bit) & 1;
                    if (on != 0) v |= 1 << i;
                }
                pic.Indices[py * w + px] = (byte)v;
            }
        pic.Planes8Bit = bits[..total];   // packed planes, as the engine lays them out in memory
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
            int x = useDescriptorPos ? Be16(rec, 12) : 0;
            int y = useDescriptorPos ? Be16(rec, 14) : 0;
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
}
