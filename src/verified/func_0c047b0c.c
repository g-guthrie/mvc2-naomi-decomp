/* 34-byte leaf. SHC -O1 emits this body plus a local 0x0342 word; the
 * first MOV.W is assembled as @(H'3A,PC) so it uses mask_pool at 0x0c047b4a. */
int func_0c047b0c(unsigned char *a, unsigned short w, unsigned short *out)
{
    unsigned short z = *(unsigned short *)(a + 0x342);
    if ((*out = ((*(unsigned short *)(a + 0x344) ^ z) |
            (*(unsigned short *)(a + 0x340) ^ z)) & w) == w)
        return 1;
    return 0;
}
