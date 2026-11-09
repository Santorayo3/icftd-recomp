namespace ICFTD.AmigaExport
{
    /// <summary>
    /// Builds the overlay file PATCH256.COM blits over the frame: a 6-bit DAC palette
    /// for entries 16.. (0..15 stay the engine's EGA colours) plus a 320x200 8-bit image.
    /// Layout: u16 palette bytes, palette (r,g,b), pad to 0x300, then 64,000 image bytes.
    /// </summary>
    internal static class Ovl
    {
        /// <summary>First DAC entry the Amiga palette is written to.</summary>
        public const int PaletteBase = 16;

        /// <summary>Offset of the image inside the file.</summary>
        public const int ImageOff = 0x300;

        public const int Width = 320, Height = 200;

        public static byte[] Build(Sms.Picture scene, out int colours, out byte[] palette6)
        {
            var pal = scene.Palette ?? Png.GreyRamp(16);
            int used = 1;
            foreach (byte v in scene.Indices) if (v + 1 > used) used = v + 1;
            colours = Math.Min(Math.Min(used, pal.Length / 3), 255 - PaletteBase);

            palette6 = new byte[colours * 3];
            for (int i = 0; i < palette6.Length; i++) palette6[i] = (byte)(pal[i] >> 2);

            var file = new byte[ImageOff + Width * Height];
            file[0] = (byte)(palette6.Length & 0xFF);
            file[1] = (byte)(palette6.Length >> 8);
            Buffer.BlockCopy(palette6, 0, file, 2, palette6.Length);
            for (int i = 0; i < Width * Height; i++) file[ImageOff + i] = (byte)(scene.Indices[i] + PaletteBase);
            return file;
        }

        /// <summary>Full 256-entry palette the image should be viewed with.</summary>
        public static byte[] PreviewPalette(byte[] palette6)
        {
            var pal = new byte[768];
            Buffer.BlockCopy(DosPlanar.VgaPalette, 0, pal, 0, DosPlanar.VgaPalette.Length);
            for (int i = 0; i < palette6.Length; i++)
                pal[PaletteBase * 3 + i] = (byte)(palette6[i] << 2);
            return pal;
        }
    }
}
