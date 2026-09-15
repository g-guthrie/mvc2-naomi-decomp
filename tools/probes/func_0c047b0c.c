/* Recovered behavior; not nominated for matching-source credit.
 * Original NAOMI body: 0x0c047b0c..0x0c047b2e (34 bytes).
 * The original loads words at byte offsets 0x342, 0x344, then 0x340,
 * stores the masked XOR/OR result, and compares the low 16 bits.
 * This equivalent C formulation is a compiler probe, not a byte match.
 */
int func_0c047b0c(short *table, unsigned int mask, short *out)
{
    int a = table[0x1a0], b = table[0x1a1], c = table[0x1a2];
    int v = mask & ((b ^ c) | (b ^ a));
    *out = v;
    return (unsigned short)v == (unsigned short)mask;
}
