/* Candidate: one function with a mid-unit pool at 0x0c02ffc8; Ghidra split
 * 0x0c02ffe8 as a second entry. Control flow, register choice and the
 * 0x0c02ffe8 inner loops are unfinished. */

struct Pl_0c02fea4 {
    unsigned char pad0[0x1e];
    short w1e;
    unsigned char pad1[0x4c9 - 0x20];
    unsigned char b4c9;
    unsigned char pad2[0x504 - 0x4ca];
    int i504[2];
    unsigned char pad3[0x524 - 0x50c];
    unsigned char b524;
    unsigned char pad4[0x52c - 0x525];
    unsigned char b52c;
    unsigned char b52d;
    unsigned char pad5[0x5a4 - 0x52e];
};

struct G_0c2d6f84_fea4 {
    unsigned char pad[0x81];
    unsigned char b81;
};

extern struct Pl_0c02fea4 dat_0c2d7088[];
extern struct G_0c2d6f84_fea4 *dat_0c2d6f84;
extern unsigned char dat_0c2fb15a[];
extern int dat_0c2fb168[];
extern unsigned char dat_0c25ebb4[];
extern int func_0c1ec190(void);

void func_0c02ffe8(char a, char b, int c);

void func_0c02fea4(char a)
{
    struct Pl_0c02fea4 *p;
    struct Pl_0c02fea4 *opp;
    struct Pl_0c02fea4 *q;
    int i;
    int bit;
    char orig;
    int mask;
    int r;
    int t;
    int u;
    int *slot;
    int x;
    int y;

    orig = a;
    p = &dat_0c2d7088[a];
    opp = &dat_0c2d7088[a ^ 1];
    dat_0c2fb15a[a] = 0;
    if (dat_0c2d6f84->b81 == 7) {
        i = 0;
        goto test7;
        do {
            q = &dat_0c2d7088[a + i * 2];
            q->b52c = (unsigned char)(i + 24);
            q = &dat_0c2d7088[a + p->w1e * 2];
            q->b52d = (unsigned char)(p->w1e + 24);
            q = &dat_0c2d7088[a + p->w1e * 2];
            q->b4c9 = 0;
            dat_0c2fb15a[orig] = dat_0c2fb15a[orig] | (char)(17 << p->w1e);
            i = p->w1e + 1;
        test7:
            p->w1e = (short)i;
        } while (p->w1e < 3);
        return;
    }
    x = 0;
    y = 0;
    i = 0;
    goto testn;
    do {
        r = func_0c1ec190() & 31;
        t = func_0c1ec190() & 1;
        mask = 1 << r;
        if ((opp->i504[t] & mask) == 0) {
            u = dat_0c2d7088[a ^ 1].b524;
            if ((dat_0c2fb168[u * 2 + t] & mask) != 0) {
                slot = &y;
                slot += t;
                if ((slot[0] & mask) == 0)
                    goto found;
            }
        }
        x = x + 1;
    testn:
        ;
    } while ((unsigned)x < 16);
    func_0c02ffe8(0, 0, 32);
    return;
found:
    ;
}

void func_0c02ffe8(char a, char b, int c)
{
    int u;
    int t;
    int mask;
    int *slot;

    do {
        u = dat_0c2d7088[0].b524;
        t = dat_0c2fb168[u * 2 + a];
        mask = 1 << b;
        if (((dat_0c2d7088[0].i504[a] ^ t) & mask) != 0) {
            slot = &c;
            if ((slot[a] & mask) == 0)
                return;
        }
        b = b + 1;
    } while ((unsigned)b < (unsigned)c);
}
