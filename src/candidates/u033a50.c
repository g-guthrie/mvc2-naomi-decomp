/* Differs: func_0c033a50 is close (pool displacements); func_0c033a62
 * reloads vs extra copies on char b8e increment; func_0c033afa extra
 * extra=a=400 nops on pointer temps. Linked length off by a few words. */

struct G_0c033a50 {
    unsigned char pad0[2];
    unsigned char b2, b3, b4, b5, b6, b7;
    short w8;
    unsigned char pad1[14 - 10];
    short w14;
    unsigned char pad2[0x8e - 16];
    char b8e;
};

typedef void (*fn_0c033a50)(void);

extern struct G_0c033a50 *dat_0c2d6f84;
extern fn_0c033a50 table_0c23b318[];
extern void func_0c022dc8(void);
extern void func_0c034358(void);
extern int func_0c1f7570(void);
extern void func_0c033cbe(void);
extern void func_0c033cd8(void);
extern void func_0c03741e(int);
extern void func_0c027ff0(int);
extern void func_0c033e6c(int, int);
extern void func_0c0343ac(int);
extern void func_0c034a1c(int);
extern void func_0c1c97e4(void);
extern void func_0c1c9a16(int);
extern void func_0c0374b8(int);
extern unsigned char dat_0c2f833e;

void func_0c033a50(void)
{
    table_0c23b318[dat_0c2d6f84->b8e]();
}

void func_0c033a62(void)
{
    func_0c022dc8();
    dat_0c2d6f84->b8e = dat_0c2d6f84->b8e + 1;
    dat_0c2d6f84->w8 = 0x12c;
    dat_0c2d6f84->w14 = 5;
    func_0c034358();
    while (func_0c1f7570() == 0)
        ;
    func_0c033cbe();
    func_0c033cd8();
    func_0c03741e(11);
    func_0c027ff0(8);
    func_0c033e6c(0, 1);
    func_0c033e6c(1, 1);
    func_0c0343ac(3);
    func_0c034a1c(47);
    func_0c1c97e4();
    func_0c1c9a16(0);
    func_0c1c9a16(1);
    func_0c1c9a16(2);
    func_0c1c9a16(3);
    func_0c1c9a16(4);
    func_0c1c9a16(5);
    func_0c1c9a16(6);
    func_0c1c9a16(7);
    func_0c0374b8(8);
}

void func_0c033afa(void)
{
    struct G_0c033a50 *g;

    g = dat_0c2d6f84;
    if (g->w14 != 0) {
        if (g->w14 > 2)
            func_0c0374b8(8);
        dat_0c2d6f84->w14 = dat_0c2d6f84->w14 - 1;
        return;
    }
    func_0c0374b8(11);
    dat_0c2d6f84->w8 = dat_0c2d6f84->w8 - 1;
    if (dat_0c2d6f84->w8 > 0xb4)
        return;
    dat_0c2d6f84->b8e = dat_0c2d6f84->b8e + 1;
    dat_0c2f833e = 0;
}
