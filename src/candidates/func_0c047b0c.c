/* Candidate. Isolated SHC still emits a local 0x0342 pool; retail loads
 * mask_pool at 0x0c047b4a. Needs the original TU/pool layout, not asm rewrite. */
int func_0c047b0c(unsigned char *a, unsigned short w, unsigned short *out)
{
    unsigned short z = *(unsigned short *)(a + 0x342);
    if ((*out = ((*(unsigned short *)(a + 0x344) ^ z) |
            (*(unsigned short *)(a + 0x340) ^ z)) & w) == w)
        return 1;
    return 0;
}
