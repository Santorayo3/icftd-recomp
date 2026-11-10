namespace ICFTD.AmigaExport.Recomp;

/// <summary>
/// One effective address as the 68000 encodes it. Extension words are consumed by the decoder, so
/// the emitter only has to turn the address into C.
/// </summary>
public sealed class Ea
{
    public int Mode;            // 0 Dn, 1 An, 2 (An), 3 (An)+, 4 -(An), 5 d16(An), 6 d8(An,Xn), 7 special
    public int Reg;
    public int Disp;            // d16 / d8, or the abs.w value
    public uint Abs;            // abs.l, d16(PC) and d8(PC,Xn) resolved to an absolute address
    public int IndexReg = -1;
    public bool IndexAddr;      // the index register is An
    public bool IndexLong;      // .l index (otherwise .w, sign-extended)
    public int Scale;           // 0..3 -> <<0..<<3
    public uint Imm;            // #imm
    public uint ExtAt;          // image offset of the abs.l / long immediate word
    public bool IsPcRelative;
}

public enum Opk
{
    Unsupported,
    Move, MoveA, MoveQ,
    Add, Sub, AddA, SubA, AddQ, SubQ, AddI, SubI,
    Cmp, CmpA, CmpI, CmpM,
    Tst, Clr, Neg, NegX, Not,
    And, Or, Eor, AndI, OrI, EorI,
    MulU, MulS, DivU, DivS,
    Btst, Bchg, Bclr, Bset,
    Shift,
    Link, Unlk, Rts, Rtr, Nop, Swap, Ext, ExtB, Tas,
    Lea, Pea, MovemToMem, MovemToReg,
    Bra, Bsr, Bcc, DBcc, Scc,
    Jsr, Jmp,
}

/// <summary>One decoded instruction, in the shape the emitter consumes.</summary>
public sealed class Insn
{
    public uint Addr;
    public ushort Op;
    public int Len;
    public Opk Kind = Opk.Unsupported;
    public int Size;                // operand size in bytes, 0 when there is none
    public Ea? Src, Dst;
    public uint Imm;                // immediate value, branch displacement base, movem mask ...
    public int Reg;                 // data/address register operand (shift count, bit number, ...)
    public int Cond;
    public uint Target;             // branch/jump destination, already absolute
    public ushort Mask;             // movem register mask
    public bool BitFromReg;
    public bool ShiftLeft, ShiftArith;
    public int ShiftType;           // 0 AS, 1 LS, 2 ROX, 3 RO
    public string Why = "";
}
