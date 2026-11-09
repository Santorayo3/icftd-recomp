namespace ICFTD.AmigaExport;

/// <summary>
/// The engine's pixel codec (shared with the DOS build): an 8-bit window selects one of
/// 17 symbols, each emitting 1 or 4 pixels of a running colour that the symbol's delta
/// advances. Ported from PixelCodec.cs of the DOS exporter.
/// </summary>
internal static class Codec
{
    readonly record struct Sym(int Bits, int Pixels, int Delta);

    static readonly Sym[] Table = Build();

    static Sym[] Build()
    {
        var t = new Sym[256];
        void Fill(int from, int count, int bits, int pixels, int delta)
        {
            for (int i = 0; i < count; i++) t[from + i] = new Sym(bits, pixels, delta);
        }
        Fill(0, 64, 2, 4, 0);
        Fill(64, 64, 2, 1, 0);
        Fill(128, 32, 3, 1, 3);
        Fill(160, 8, 5, 1, 13);
        Fill(168, 8, 5, 1, 14);
        Fill(176, 16, 4, 1, 2);
        Fill(192, 8, 5, 1, 7);
        Fill(200, 8, 5, 1, 9);
        Fill(208, 8, 5, 1, 1);
        Fill(216, 8, 5, 1, 15);
        Fill(224, 8, 5, 1, 10);
        Fill(232, 4, 6, 1, 6);
        Fill(236, 4, 6, 1, 8);
        Fill(240, 8, 5, 1, 5);
        Fill(248, 2, 7, 1, 11);
        Fill(250, 2, 7, 1, 12);
        Fill(252, 4, 6, 1, 4);
        return t;
    }

    /// <summary>Decodes pixels from a byte-aligned bit stream; returns the bits consumed.</summary>
    public static byte[] Decode(byte[] src, int start, int pixels, int mask, out int bitsUsed)
    {
        int bitCount = (src.Length - start) * 8;
        var outp = new byte[pixels];
        int produced = 0;
        int bit = 0;
        byte colour = 0;
        while (produced < pixels && bit + 2 <= bitCount)
        {
            int window = 0;
            for (int i = 0; i < 8; i++)
            {
                window <<= 1;
                int b = bit + i;
                if (b < bitCount) window |= (src[start + (b >> 3)] >> (7 - (b & 7))) & 1;
            }
            var sym = Table[window];
            bit += sym.Bits;
            colour = (byte)((colour + sym.Delta) & mask);
            for (int i = 0; i < sym.Pixels && produced < pixels; i++) outp[produced++] = colour;
        }
        bitsUsed = bit;
        return outp;
    }
}
