using System.Text;

namespace ICFTD.AmigaExport;

/// <summary>Trial decoders for the Cinemaware "LZ" streams; used to identify the variant.</summary>
internal static class Lz
{
    /// <summary>
    /// "LZ" resource: 'L' 'Z' u8 tag, u32 big-endian unpacked size, then a variable width
    /// (9..12 bit) LZW stream. A code of (1&lt;&lt;n)-2 restarts the dictionary and widens the
    /// codes, (1&lt;&lt;n)-1 ends the stream. Ported from Decode() in dshell at 0x2069C.
    /// </summary>
    public static byte[]? Unpack(byte[] src, out string note)
    {
        note = "";
        if (src.Length < 8 || src[0] != (byte)'L' || src[1] != (byte)'Z') return null;

        byte tag = src[2];
        int size = (src[3] << 24) | (src[4] << 16) | (src[5] << 8) | src[6];
        if (size <= 0 || size > 1 << 22) { note = $"implausible size {size}"; return null; }

        var outp = new List<byte>(size + 16);
        var symbol = new byte[4096];
        var child = new int[4096];
        for (int i = 0; i < 256; i++) { symbol[i] = (byte)i; }

        int p = 7;
        uint buf = 0;
        int avail = 0;
        int n = 9, maxCode = (1 << 9) - 1, growCode = maxCode - 1, nodes = 256;

        int ReadCode()
        {
            while (avail <= 24)
            {
                if (p >= src.Length) throw new EndOfStreamException();
                buf |= (uint)src[p++] << (24 - avail);
                avail += 8;
            }
            avail -= n;
            int code = (int)(buf >> (32 - n));
            buf <<= n;
            return code;
        }

        var scratch = new byte[4096];
        try
        {
            int code1 = ReadCode();
            if (code1 == maxCode) goto done;
            symbol[0] = 0;
            byte last = (byte)code1;
            outp.Add(last);

            while (true)
            {
                int code2 = ReadCode();
                if (code2 == growCode)
                {
                    nodes = 256;
                    if (n < 12) { n++; maxCode = (1 << n) - 1; growCode = maxCode - 1; }
                    code1 = ReadCode();
                    if (code1 == maxCode) break;
                    last = (byte)code1;
                    outp.Add(last);
                    continue;
                }
                if (code2 == maxCode) break;

                int a0 = 0;
                int cur = code2;
                if (code2 >= nodes)
                {
                    scratch[a0++] = last;
                    cur = code1;
                }
                while (cur > 0xFF)
                {
                    scratch[a0++] = symbol[cur];
                    cur = child[cur];
                    if (a0 >= scratch.Length - 1) throw new InvalidOperationException("dictionary cycle");
                }
                scratch[a0] = (byte)cur;
                last = (byte)cur;

                for (int i = a0; i >= 0; i--) outp.Add(scratch[i]);

                symbol[nodes] = last;
                child[nodes] = code1;
                nodes++;
                code1 = code2;
            }
        }
        catch (EndOfStreamException) { note = "stream ended early"; }
        catch (InvalidOperationException e) { note = e.Message; }

    done:
        if (outp.Count > size) { outp.RemoveRange(size, outp.Count - size); }
        while (outp.Count < size) outp.Add(0);
        outp[size - 1] = tag;
        return outp.ToArray();
    }

    /// <summary>
    /// LZSS with one flag byte per 8 items. A match is two bytes holding an offset and a
    /// length; the caller tries the plausible bit orders and encodings.
    /// </summary>
    public static byte[] Lzss(byte[] src, int start, int maxOut, bool literalOnOne, bool msbFirst,
                              int offsetBits, int lenBits, int lenBias, byte prefill = 0)
    {
        var outp = new List<byte>(maxOut);
        int p = start;
        int flags = 0, bitsLeft = 0;
        int lenMask = (1 << lenBits) - 1;

        while (p < src.Length && outp.Count < maxOut)
        {
            if (bitsLeft == 0)
            {
                if (p >= src.Length) break;
                flags = src[p++];
                bitsLeft = 8;
            }
            bool bit = msbFirst ? (flags & 0x80) != 0 : (flags & 0x01) != 0;
            flags = msbFirst ? (byte)(flags << 1) : (byte)(flags >> 1);
            bitsLeft--;

            if (bit == literalOnOne)
            {
                if (p >= src.Length) break;
                outp.Add(src[p++]);
                continue;
            }

            int need = (offsetBits + lenBits + 7) / 8;
            if (p + need > src.Length) break;
            int word = 0;
            for (int i = 0; i < need; i++) word = (word << 8) | src[p++];
            int len = (word & lenMask) + lenBias;
            int offset = word >> lenBits;
            for (int i = 0; i < len && outp.Count < maxOut; i++)
            {
                int from = outp.Count - offset;
                outp.Add(from >= 0 && from < outp.Count ? outp[from] : prefill);
            }
        }
        return outp.ToArray();
    }

    /// <summary>LZSS with a 16-bit token: literals below 0x100, matches above.</summary>
    public static byte[] Token(byte[] src, int start, int maxOut, int offsetShift, int lenBias,
                               byte prefill = 0, bool bigEndian = true)
    {
        var outp = new List<byte>(maxOut);
        int p = start;
        while (p + 1 < src.Length && outp.Count < maxOut)
        {
            int w = bigEndian ? (src[p] << 8) | src[p + 1] : src[p] | (src[p + 1] << 8);
            p += 2;
            if (w < 0x100) { outp.Add((byte)w); continue; }
            int len = (w & 0x0F) + lenBias;
            int offset = w >> offsetShift;
            for (int i = 0; i < len && outp.Count < maxOut; i++)
            {
                int from = outp.Count - offset;
                outp.Add(from >= 0 && from < outp.Count ? outp[from] : prefill);
            }
        }
        return outp.ToArray();
    }

    /// <summary>
    /// Token stream: a word below 0x100 introduces that many literal bytes, anything
    /// larger is a match with the length in the top nibble and the offset in the low bits.
    /// </summary>
    public static byte[] TokenRun(byte[] src, int start, int maxOut, int lenBias, int offBias,
                                  int lenShift, byte prefill = 0)
    {
        var outp = new List<byte>(maxOut);
        int p = start;
        int lenShiftBits = lenShift;
        while (p + 1 < src.Length && outp.Count < maxOut)
        {
            int w = (src[p] << 8) | src[p + 1];
            p += 2;
            if (w < 0x100)
            {
                for (int i = 0; i < w && p < src.Length && outp.Count < maxOut; i++) outp.Add(src[p++]);
                continue;
            }
            int len = (w >> lenShiftBits) + lenBias;
            int offset = (w & ((1 << lenShiftBits) - 1)) + offBias;
            for (int i = 0; i < len && outp.Count < maxOut; i++)
            {
                int from = outp.Count - offset;
                outp.Add(from >= 0 && from < outp.Count ? outp[from] : prefill);
            }
        }
        return outp.ToArray();
    }

    public static string Describe(byte[] d, int n = 24)    {
        var sb = new StringBuilder();
        for (int i = 0; i < Math.Min(n, d.Length); i++) sb.Append(d[i].ToString("X2")).Append(' ');
        sb.Append("| ");
        for (int i = 0; i < Math.Min(n, d.Length); i++)
            sb.Append(d[i] >= 32 && d[i] < 127 ? (char)d[i] : '.');
        return $"{d.Length,6}: {sb}";
    }
}
