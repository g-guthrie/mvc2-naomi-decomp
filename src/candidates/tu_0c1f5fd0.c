/* Candidate: 134/176 bytes equal. Matches through the three queue pushes
   (volatile pointer variables reproduce add/store/add-4 pushes). Retail
   computes (end - start) / 4 inline in r0 with cmp/pz + add #3 + shar x2;
   the hand-written sign-fix idiom here compiles to the same ops but with
   n in r4 and the start pointer in r0 instead of r0 and r2. */
extern volatile int *dat_0c344d6c;
extern volatile int *dat_0c344d70;
extern volatile int *dat_0c344d74;
extern int dat_0c344d64;
extern int dat_0c344d68;

volatile int *func_0c1f5fd0(int flags)
{
    int n;
    while (*(volatile int *)0xa05f6c18)
        ;
    *dat_0c344d6c = -1;
    dat_0c344d74 = dat_0c344d70;
    *dat_0c344d74++ = 0x80000000;
    *dat_0c344d74++ = dat_0c344d64;
    *dat_0c344d74++ = flags | 0x2000;
    n = (int)dat_0c344d74 - (int)dat_0c344d70;
    if (n < 0) n += 3;
    *dat_0c344d70 |= (n >> 2) - 3;
    dat_0c344d70[2] |= (unsigned char)*dat_0c344d70 << 24;
    while (*(volatile int *)0xa05f6c18)
        ;
    *(volatile int *)0xa05f6c04 = dat_0c344d68;
    *(volatile int *)0xa05f6c14 = 1;
    *(volatile int *)0xa05f6c18 = 1;
    while (*(volatile int *)0xa05f6c18)
        ;
    return dat_0c344d6c;
}
