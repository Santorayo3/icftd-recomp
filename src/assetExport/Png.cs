using System.IO.Compression;

namespace ICFTD.AmigaExport;

/// <summary>Minimal 8-bit palette PNG writer.</summary>
internal static class Png
{
    static readonly uint[] Crc = BuildCrc();

    static uint[] BuildCrc()
    {
        var table = new uint[256];
        for (uint n = 0; n < 256; n++)
        {
            uint c = n;
            for (int k = 0; k < 8; k++) c = (c & 1) != 0 ? 0xEDB88320u ^ (c >> 1) : c >> 1;
            table[n] = c;
        }
        return table;
    }

    public static byte[] GreyRamp(int count)    {
        var pal = new byte[count * 3];
        for (int i = 0; i < count; i++)
        {
            int v = i * 255 / Math.Max(1, count - 1);
            pal[i * 3] = (byte)v; pal[i * 3 + 1] = (byte)v; pal[i * 3 + 2] = (byte)v;
        }
        return pal;
    }

    public static void Write(string path, int width, int height, byte[] indices, byte[] paletteRgb)
    {
        using var fs = File.Create(path);
        fs.Write(new byte[] { 0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A });

        var ihdr = new byte[13];
        ihdr[0] = (byte)(width >> 24); ihdr[1] = (byte)(width >> 16); ihdr[2] = (byte)(width >> 8); ihdr[3] = (byte)width;
        ihdr[4] = (byte)(height >> 24); ihdr[5] = (byte)(height >> 16); ihdr[6] = (byte)(height >> 8); ihdr[7] = (byte)height;
        ihdr[8] = 8;
        ihdr[9] = 3;
        Chunk(fs, "IHDR", ihdr);
        Chunk(fs, "PLTE", paletteRgb);

        using var raw = new MemoryStream();
        for (int y = 0; y < height; y++)
        {
            raw.WriteByte(0);
            raw.Write(indices, y * width, width);
        }

        using var compressed = new MemoryStream();
        using (var z = new ZLibStream(compressed, CompressionLevel.Optimal, leaveOpen: true))
        {
            raw.Position = 0;
            raw.CopyTo(z);
        }
        Chunk(fs, "IDAT", compressed.ToArray());
        Chunk(fs, "IEND", Array.Empty<byte>());
    }

    static void Chunk(Stream s, string type, byte[] data)
    {
        var len = new byte[4];
        len[0] = (byte)(data.Length >> 24); len[1] = (byte)(data.Length >> 16);
        len[2] = (byte)(data.Length >> 8); len[3] = (byte)data.Length;
        s.Write(len);

        var body = new byte[4 + data.Length];
        for (int i = 0; i < 4; i++) body[i] = (byte)type[i];
        Buffer.BlockCopy(data, 0, body, 4, data.Length);
        s.Write(body);

        uint crc = 0xFFFFFFFFu;
        foreach (byte b in body) crc = Crc[(crc ^ b) & 0xFF] ^ (crc >> 8);
        crc ^= 0xFFFFFFFFu;
        s.Write(new byte[] { (byte)(crc >> 24), (byte)(crc >> 16), (byte)(crc >> 8), (byte)crc });
    }
}
