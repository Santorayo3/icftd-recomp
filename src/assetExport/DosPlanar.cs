namespace ICFTD.AmigaExport;

/// <summary>
/// Converts an 8-bit Amiga picture into the DOS engine's 4-bit planar layout
/// (352x224 window, 40 bytes per row, four planes 9856 bytes apart).
/// </summary>
internal static class DosPlanar
{
    /// <summary>The 16 colours the DOS build programs into the VGA DAC.</summary>
    public static readonly byte[] VgaPalette =
    {
          0,   0,   0,
        255, 255, 255,
          0,   0, 138,
          0, 162,   0,
          0, 174, 174,
        174,   0,   0,
        174,   0, 174,
          0,   0,   0,
        174,  85,   0,
        174, 174, 174,
         85,  85,  85,
         85,  85, 255,
         85, 255,  77,
         85, 255, 255,
        255,  85,  85,
        255, 255,  85,
    };

    public const int RowBytes = 40;
    public const int Rows = 200;
    public const int PlaneStride = 9856;

    /// <summary>Map to the nearest VGA colour and pack four planes, one bit per pixel.</summary>
    public static byte[] Pack(byte[] indices, byte[] palette, int w, int h)
    {
        var lut = Nearest(palette);
        int planeSize = RowBytes * Rows;
        var planes = new byte[planeSize * 4];
        for (int y = 0; y < h && y < Rows; y++)
            for (int x = 0; x < w && x < RowBytes * 8; x++)
            {
                int idx = indices[y * w + x];
                int dos = idx < lut.Length ? lut[idx] : 0;
                int bit = 7 - (x & 7), off = y * RowBytes + (x >> 3);
                for (int p = 0; p < 4; p++)
                    if (((dos >> p) & 1) != 0) planes[p * planeSize + off] |= (byte)(0x80 >> bit);
            }
        return planes;
    }

    static byte[] Nearest(byte[] palette)
    {
        int n = Math.Max(1, palette.Length / 3);
        var lut = new byte[n];
        for (int i = 0; i < n; i++)
        {
            int br = palette[i * 3], bg = palette[i * 3 + 1], bb = palette[i * 3 + 2];
            int best = 0, bestD = int.MaxValue;
            for (int c = 0; c < 16; c++)
            {
                int dr = br - VgaPalette[c * 3], dg = bg - VgaPalette[c * 3 + 1], db = bb - VgaPalette[c * 3 + 2];
                int d = dr * dr * 3 + dg * dg * 6 + db * db;
                if (d < bestD) { bestD = d; best = c; }
            }
            lut[i] = (byte)best;
        }
        return lut;
    }

    /// <summary>Expands packed planes back to 8-bit indices for a preview.</summary>
    public static byte[] Unpack(byte[] planes, int w, int h)
    {
        // Clamped like Pack: a picture larger than the 320x200 window only ever had its
        // top-left corner stored, so anything outside stays black instead of reading past
        // the end of the plane.
        const int canvasWidth = RowBytes * 8;
        int planeSize = RowBytes * Rows;
        var img = new byte[w * h];
        for (int y = 0; y < h && y < Rows; y++)
            for (int x = 0; x < w && x < canvasWidth; x++)
            {
                int bit = 7 - (x & 7), off = y * RowBytes + (x >> 3), v = 0;
                for (int p = 0; p < 4; p++)
                    if (((planes[p * planeSize + off] >> bit) & 1) != 0) v |= 1 << p;
                img[y * w + x] = (byte)v;
            }
        return img;
    }
}
