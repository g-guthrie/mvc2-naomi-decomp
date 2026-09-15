/* SHC prefix fixture for func_0c047b0c.
 * Seven return-0 pads push the 0x0342 pool to entry+0x3e so the first
 * instruction bakes retail's PC-relative disp (1d90). Dummy pads are not
 * game code. Full 34-byte match is still blocked on the epilogue. */
int func_0c047b0c(unsigned char *a, unsigned short w, unsigned short *out)
{
    unsigned short z = *(unsigned short *)(a + 0x342);
    *out = ((*(unsigned short *)(a + 0x344) ^ z) |
            (*(unsigned short *)(a + 0x340) ^ z)) & w;
    return *out == w;
}
int p0(void) { return 0; }
int p1(void) { return 0; }
int p2(void) { return 0; }
int p3(void) { return 0; }
int p4(void) { return 0; }
int p5(void) { return 0; }
int p6(void) { return 0; }
