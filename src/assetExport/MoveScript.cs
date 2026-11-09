using System.Text;

namespace ICFTD.AmigaExport;

/// <summary>
/// A Cinemaware "MovE" script, laid out as dshell <c>FUN_0001DE7A</c> reads it:
/// <code>
///   "MovE"  u16 version  u16 assetCount  u16 labelCount
///   assetCount x (u16 length + chars)        asset names, resolved to bank records
///   labelCount x (u16 length + chars)        label names (entry points)
///   assetCount x u16                         copied to record +0x0A
///   labelCount x 16 bytes                    copied to record +0x0A, command count at +2
///   per label: u16 commandCount,
///              commandCount x (u16 assetIndex + 14 bytes)
///   u16 entryIndex                           must address a label
/// </code>
/// Asset index 0xFFFF means "no asset" (the original stores a null pointer).
/// </summary>
internal sealed class MoveScript
{
    public const int CommandSize = 18;      // u16 asset index + 14 argument bytes
    public const ushort NoAsset = 0xFFFF;

    public int Version;
    public int Entry;
    public readonly List<string> Assets = new();
    public readonly List<string> Labels = new();
    public readonly List<ushort> AssetWords = new();
    public readonly List<byte[]> LabelHeads = new();
    public readonly List<List<Command>> Commands = new();

    public sealed class Command
    {
        public int Asset;                   // index into Assets, or -1
        public byte[] Args = new byte[14];
        public ushort[] ArgsU16 => new[]
        {
            (ushort)((Args[0] << 8) | Args[1]),  (ushort)((Args[2] << 8) | Args[3]),
            (ushort)((Args[4] << 8) | Args[5]),  (ushort)((Args[6] << 8) | Args[7]),
            (ushort)((Args[8] << 8) | Args[9]),  (ushort)((Args[10] << 8) | Args[11]),
            (ushort)((Args[12] << 8) | Args[13])
        };
    }

    public static MoveScript? Parse(byte[] d, out string error)
    {
        error = "";
        var s = new MoveScript();
        int p = 0;

        ushort U16()
        {
            if (p + 2 > d.Length) throw new IndexOutOfRangeException();
            int v = (d[p] << 8) | d[p + 1];
            p += 2;
            return (ushort)v;
        }
        byte[] Bytes(int n)
        {
            if (p + n > d.Length) throw new IndexOutOfRangeException();
            var b = d.AsSpan(p, n).ToArray();
            p += n;
            return b;
        }
        string Name()
        {
            int len = U16();
            var b = Bytes(len);
            return Encoding.ASCII.GetString(b);
        }

        try
        {
            if (d.Length < 10 || d[0] != 'M' || d[1] != 'o' || d[2] != 'v' || d[3] != 'E')
            {
                error = "no MovE tag";
                return null;
            }
            p = 4;
            s.Version = U16();
            int assets = U16();
            int labels = U16();
            if (assets + labels > 4096) { error = $"implausible counts {assets}+{labels}"; return null; }

            for (int i = 0; i < assets; i++) s.Assets.Add(Name());
            for (int i = 0; i < labels; i++) s.Labels.Add(Name());
            for (int i = 0; i < assets; i++) s.AssetWords.Add(U16());
            for (int i = 0; i < labels; i++)
            {
                var head = Bytes(16);
                s.LabelHeads.Add(head);
                int count = (head[2] << 8) | head[3];
                var list = new List<Command>();
                for (int c = 0; c < count; c++)
                {
                    int idx = U16();
                    var cmd = new Command { Asset = idx == NoAsset ? -1 : idx, Args = Bytes(14) };
                    if (cmd.Asset >= assets) cmd.Asset = -1;
                    list.Add(cmd);
                }
                s.Commands.Add(list);
            }
            s.Entry = U16();
            if (p != d.Length)
                error = $"{d.Length - p} trailing byte(s)";
            return s;
        }
        catch (IndexOutOfRangeException)
        {
            error = $"truncated at 0x{p:X}";
            return null;
        }
    }

    /// <summary>Human readable dump; <paramref name="maxCommands"/> limits each label.</summary>
    public string Dump(string name, int maxCommands = 8)
    {
        var sb = new StringBuilder();
        string entryName = Entry >= Assets.Count && Entry - Assets.Count < Labels.Count
            ? Labels[Entry - Assets.Count]
            : $"#{Entry} (invalid)";
        sb.AppendLine($"{name}: version 0x{Version:x4}, {Assets.Count} assets, {Labels.Count} labels, entry {entryName}");

        for (int i = 0; i < Assets.Count; i++)
            sb.AppendLine($"  asset {i,3} {Assets[i],-16} +0x0A={AssetWords[i]:x4}");

        for (int i = 0; i < Labels.Count; i++)
        {
            var head = LabelHeads[i];
            var cmds = Commands[i];
            sb.AppendLine($"  label {i,3} {Labels[i],-16} head={Convert.ToHexString(head)} commands={cmds.Count}");
            for (int c = 0; c < cmds.Count && c < maxCommands; c++)
            {
                var cmd = cmds[c];
                string who = cmd.Asset >= 0 ? $"{cmd.Asset,3} {Assets[cmd.Asset]}" : "  - (none)";
                var u = cmd.ArgsU16;
                sb.AppendLine($"      {c,4}: {who,-22} " +
                              string.Join(" ", u.Select(v => v.ToString("x4"))) +
                              $"   raw {Convert.ToHexString(cmd.Args)}");
            }
            if (cmds.Count > maxCommands) sb.AppendLine($"      ... {cmds.Count - maxCommands} more");
        }
        return sb.ToString();
    }
}
