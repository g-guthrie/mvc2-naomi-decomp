/* Candidate: func_0c03012c loop/register allocation differs (r8/r9/r11/r12);
 * func_0c030190 else-path table index and signed % 4 spelling differ;
 * func_0c03024c is a same-file tail bra to func_0c030190. */

struct Pl_0c03012c {
    unsigned char pad0[0x1e];
    short w1e;
    unsigned char pad1[0x510 - 0x20];
    unsigned char b510;
    unsigned char pad2[0x52d - 0x511];
    unsigned char b52d;
    unsigned char pad3[0x5a4 - 0x52e];
};

struct G_0c2d6f84_12c {
    unsigned char pad0[0x81];
    unsigned char b81;
    unsigned char pad1[0x84 - 0x82];
    char b84;
    char b85;
    unsigned char pad2[0xab - 0x86];
    unsigned char bab;
};

extern struct Pl_0c03012c dat_0c2d7088[];
extern struct G_0c2d6f84_12c *dat_0c2d6f84;
extern unsigned char dat_0c2d96a4;
extern unsigned char dat_0c23b168[];
extern unsigned char func_0c02f958(struct Pl_0c03012c *, struct Pl_0c03012c *, int);
extern int func_0c1ec190(void);

void func_0c030190(void);

void func_0c03012c(char a)
{
    struct Pl_0c03012c *p;
    struct Pl_0c03012c *q;
    int n;
    int lim;
    char s;

    s = a;
    lim = 3;
    n = 0x200;
    p = &dat_0c2d7088[s];
    for (p->w1e = 0; p->w1e < lim; p->w1e = p->w1e + 1) {
        q = &dat_0c2d7088[p->w1e * 2 + s];
        q->b52d = func_0c02f958(p, q, n);
    }
}

void func_0c030190(void)
{
    struct G_0c2d6f84_12c *g;
    int r;
    int n;
    unsigned char v;

    g = dat_0c2d6f84;
    if ((g->b84 | g->b85) == 3) {
        r = func_0c1ec190() % 6;
        n = func_0c1ec190() % 4;
        dat_0c2d96a4 = dat_0c23b168[n * 8 + r];
    } else {
        if ((g->b84 | g->b85) == 1)
            v = dat_0c23b168[dat_0c2d7088[0].b510 * 8 + dat_0c2d6f84->b81];
        else
            v = dat_0c23b168[dat_0c2d7088[1].b510 * 8 + dat_0c2d6f84->b81];
        dat_0c2d96a4 = v;
        if ((unsigned char)dat_0c2d96a4 == 8) {
            dat_0c2d6f84->bab = 1;
            return;
        }
    }
    dat_0c2d6f84->bab = 0;
}

void func_0c03024c(void)
{
    func_0c030190();
}
