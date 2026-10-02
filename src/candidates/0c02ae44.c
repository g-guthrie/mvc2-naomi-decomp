/* Candidate: 0x0c02ae44 size 528. First two functions nearly match;
 * func_0c02aee0 misses fldi1 delay-slot scheduling for func_0c023658(1.0f);
 * func_0c02af36 is longer (early pool) and differs in r13 vs pointer cache
 * and b41 compare. */
struct G_0c02ae44 {
    unsigned char b0;
    unsigned char b1;
    char b2;
    unsigned char pad0[8 - 3];
    short w8;
    unsigned char pad1[20 - 10];
    int l20;
    unsigned char pad2[26 - 24];
    unsigned char b26;
    unsigned char pad3[41 - 27];
    char b41;
    unsigned char pad4[78 - 42];
    unsigned char b78;
    unsigned char pad5[141 - 79];
    unsigned char b141;
};

typedef void (*fn_0c02ae44)(void);

extern struct G_0c02ae44 *dat_0c2d6f84;
extern unsigned char dat_0c2f8cc0;
extern unsigned char dat_0c2f8cc1;
extern unsigned char dat_0c2d7008[];
extern unsigned char dat_0c2f8338[];
extern unsigned char dat_0c22b5fc[];
extern unsigned char dat_0c22b3bc[];
extern unsigned char dat_0c23a9bc;
extern fn_0c02ae44 table_0c23aa00[];
extern fn_0c02ae44 table_0c23aa08[];
extern void func_0c1f8bb0(int, int);
extern void func_0c02aa78(void);
extern void func_0c02aaac(void);
extern void *func_0c1fba00(void *, unsigned char, unsigned int);
extern void func_0c037354(void);
extern void func_0c034060(void);
extern void func_0c0336a0(void);
extern void func_0c023a50(void);
extern void func_0c0268b8(void);
extern void func_0c0267c4(void);
extern void func_0c0275bc(void *);
extern void func_0c0275d0(void);
extern void func_0c023658(float, int);
extern void func_0c02a7ea(int, int, int);
extern int func_0c0230be(void);
extern void func_0c026ae6(void *);
extern void func_0c030d64(void);
extern void func_0c1cceee(void);

void func_0c02ae44(void)
{
    unsigned char z;

    dat_0c2d6f84->b1++;
    dat_0c2d6f84->l20 = 64;
    z = 0;
    dat_0c2d6f84->b26 = z;
    dat_0c2d6f84->b141 = z;
    if (dat_0c2d6f84->b78) {
        dat_0c2d6f84->b1 = dat_0c2d6f84->b78;
        dat_0c2d6f84->b78 = z;
    }
    dat_0c2f8cc0 = 1;
    dat_0c2f8cc1 = 20;
    func_0c1f8bb0(0, 0);
    func_0c1f8bb0(1, 0);
    func_0c02aa78();
    func_0c02aaac();
    func_0c1fba00(dat_0c2d7008, 0, 0x80);
    func_0c1fba00(dat_0c2f8338, 0, 0xc0);
    func_0c037354();
    func_0c034060();
    func_0c0336a0();
}

void func_0c02aed0(void)
{
    table_0c23aa00[dat_0c2d6f84->b2]();
}

void func_0c02aee0(void)
{
    dat_0c2d6f84->b2++;
    dat_0c2d6f84->w8 = 0xb4;
    func_0c02aa78();
    func_0c02aaac();
    func_0c037354();
    func_0c023a50();
    func_0c0268b8();
    func_0c0267c4();
    func_0c0275bc(&dat_0c23a9bc);
    func_0c0275d0();
    func_0c023658(1.0f, 0);
    func_0c02a7ea(-1, 20, 0);
}

void func_0c02af36(void)
{
    unsigned char *p;
    int n;

    dat_0c2d6f84->w8 = dat_0c2d6f84->w8 - 1;
    if (dat_0c2d6f84->w8 == 0) {
        if (func_0c0230be() == 0) {
            dat_0c2d6f84->b1++;
            dat_0c2d6f84->b2 = 0;
        } else {
            dat_0c2d6f84->w8 = dat_0c2d6f84->w8 + 1;
        }
    } else {
        if (dat_0c2d6f84->b41 == 1)
            p = dat_0c22b5fc;
        else
            p = dat_0c22b3bc;
        n = 100;
        do {
            func_0c026ae6(p);
            p = p + 64;
        } while ((unsigned char)*p < n);
    }
    if (dat_0c2d6f84->w8 == 0x9b)
        func_0c030d64();
}

void func_0c02b020(void)
{
    func_0c1cceee();
}

void func_0c02b026(void)
{
    table_0c23aa08[dat_0c2d6f84->b2]();
}
