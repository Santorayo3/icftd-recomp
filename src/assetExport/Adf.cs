namespace ICFTD.AmigaExport;

/// <summary>Raw 880K Amiga floppy image (11 sectors x 512 bytes x 2 sides x 80 tracks).</summary>
internal sealed class Adf
{
    public const int BlockSize = 512;
    readonly byte[] d;

    public Adf(string path) => d = File.ReadAllBytes(path);

    public string Path { get; } = "";
    public bool Ffs => d.Length > 3 && d[3] != 0;
    public int BlockCount => d.Length / BlockSize;
    public int Offset(int block) => block * BlockSize;
    public byte Byte(int off) => d[off];
    public int I32(int off) => (d[off] << 24) | (d[off + 1] << 16) | (d[off + 2] << 8) | d[off + 3];
    public byte[] Copy(int off, int len) => d.AsSpan(off, len).ToArray();
}
