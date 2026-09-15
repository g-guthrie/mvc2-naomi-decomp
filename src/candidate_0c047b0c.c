/* Candidate: SHC 5.0r31 -optimize=1 emits this algorithm with r7/r3/r2
 * loads matching retail, but the PC-relative literal displacement, extu
 * order, and rts delay-slot (movt vs nop) still differ. Not in the strict
 * matching link. */

int func_0c047b0c(unsigned char *a, unsigned short w, unsigned short *out)
{
    unsigned short z = *(unsigned short *)(a + 0x342);
    *out = ((*(unsigned short *)(a + 0x344) ^ z) |
            (*(unsigned short *)(a + 0x340) ^ z)) & w;
    return *out == w;
}
