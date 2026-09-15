/* Unverified 34-byte leaf. Isolated SHC -O1 is 22/34, linked size 36.
 * Shared pool is verified as mask_pool; disp 0x1d needs this function in
 * the same TU as src/candidates/mask_tu.c. */
int func_0c047b0c(unsigned char *a, unsigned short w, unsigned short *out)
{
    unsigned short z = *(unsigned short *)(a + 0x342);
    *out = ((*(unsigned short *)(a + 0x344) ^ z) |
            (*(unsigned short *)(a + 0x340) ^ z)) & w;
    return *out == w;
}
