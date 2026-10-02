/* Candidate: no verified twins. Remaining diffs: most of func_0c0228ec/948/bc6
 * still stubs; 0x0c022868 bit-mask shape is a first draft. */

struct G_0c2f8498_fix {
    unsigned char pad0[24];
    int i24;
    unsigned char pad1[0x51 - 28];
    unsigned char b51;
    unsigned char pad2[0x73 - 0x52];
    unsigned char b73;
    unsigned char b74;
    unsigned char pad3[1];
    unsigned char b76;
    unsigned char b77;
};

extern struct G_0c2f8498_fix dat_0c2f8498;
extern int func_0c1e6af4(void);
extern unsigned char *dat_0c2d6f84;

int func_0c022868(void)
{
    int r;
    unsigned char *p;
    int v;

    r = 0;
    dat_0c2f8498.i24 = func_0c1e6af4();
    if (dat_0c2f8498.i24 == -1)
        return 0x80;
    dat_0c2f8498.i24 = dat_0c2f8498.i24 & 60;
    p = dat_0c2d6f84;
    if ((p[0x85] & 1) == 0)
        dat_0c2f8498.i24 = dat_0c2f8498.i24 & ~12;
    if ((p[0x85] & 2) == 0)
        dat_0c2f8498.i24 = dat_0c2f8498.i24 & ~48;
    v = dat_0c2f8498.i24;
    if (v & 12)
        r = 1;
    if (v & 48)
        r = r | 2;
    return r;
}

void func_0c0228ce(void)
{
    dat_0c2f8498.b51 = 0;
    dat_0c2f8498.b74 = 0;
    dat_0c2f8498.b73 = 0;
    dat_0c2f8498.b77 = 0;
    dat_0c2f8498.b76 = 0;
}

void func_0c0228ec(char a)
{
    unsigned char buf[4];
    unsigned char *p;

    p = buf;
    while (p < buf + 4) {
        *p = 127;
        p = p + 1;
    }
    (void)a;
}

void func_0c022948(void) { }
void func_0c022b9c(void) { }
void func_0c022bc6(void) { }
