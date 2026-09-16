/* Three functions sharing the literal pool at 0x0c113448. 285/288 bytes match.
 * func_0c1133a8 differs in one instruction: the load of b1d4 for the zero
 * test goes to r1 where retail uses r3 (0x0c1133d2/0x0c1133d4). Eleven
 * spellings of the test did not move it. */

struct Sub_tu5_10 { unsigned char pad[4]; short w4; };
struct Flag_tu5_10 { char b0; };

struct Obj_tu5_10 {
    unsigned char pad0[5];
    unsigned char b5, b6, b7;
    unsigned char pad1[0x1d4 - 8];
    char b1d4;
    unsigned char pad2[0x1e9 - 0x1d5];
    unsigned char b1e9;
    unsigned char pad3[0x1f9 - 0x1ea];
    unsigned char b1f9;
    unsigned char pad4[2];
    char b1fc;
    unsigned char pad5[0x2a4 - 0x1fd];
    struct Sub_tu5_10 x2a4;
    unsigned char pad6[0x37c - 0x2aa];
    unsigned char x37c[8];
    unsigned char x384[0x40c - 0x384];
    struct Flag_tu5_10 *p40c;
};

extern unsigned char dat_0c24c160[];
extern unsigned char dat_0c24c170[];
extern unsigned char func_0c046e7e(struct Obj_tu5_10 *, unsigned char *, unsigned char *);
extern unsigned char func_0c046dd0(struct Obj_tu5_10 *, int);
extern void func_0c045248(struct Obj_tu5_10 *, int);

int func_0c11334c(struct Obj_tu5_10 *a)
{
    struct Sub_tu5_10 *q = &a->x2a4;

    if (!func_0c046e7e(a, dat_0c24c160, a->x37c))
        return 0;
    if (!a->p40c->b0)
        return 0;
    if (q->w4 != 0)
        return 0;
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 2;
    func_0c045248(a, 29);
    return 1;
}

int func_0c1133a8(struct Obj_tu5_10 *a)
{
    if (!func_0c046e7e(a, dat_0c24c170, a->x384))
        return 0;
    if (a->b1f9 == 2 && a->b1fc == 0) {
        if (a->b1d4 != 0)
            return 0;
        a->b1d4 = a->b1d4 + 1;
    }
    if (a->p40c->b0 == 0)
        return 0;
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 3;
    func_0c045248(a, 29);
    return 1;
}

int func_0c11340e(struct Obj_tu5_10 *a)
{
    if (!func_0c046dd0(a, 4))
        return 0;
    a->b1e9 = 4;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}
