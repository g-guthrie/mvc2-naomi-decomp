/* Candidate: no verified twins. func_0c0221d8 is one function through 0x0c022353
 * (0x0c0222c8 is a branch target, not a separate function). Remaining diffs:
 * bsr vs jsr for in-range callees, loop/register shape on the 0xb4 wait loops,
 * func_0c022354 copy loop uses r4/r5 byte offsets. */

extern void func_0c02aa78(void);
extern void func_0c02aaac(void);
extern int dat_0c283ee4;
extern void func_0c1e9b20(void);
extern void func_0c021bde(void);
extern int **dat_0c283e6c;
extern void *dat_0c238e78[];
extern void *dat_0c238e98[];
extern unsigned short dat_0c2d6f24;
extern int func_0c021aa0(void);
extern void func_0c021b68(void);
extern void func_0c02215e(void *p);
extern void func_0c1eca20(int a);
extern void func_0c1ecc20(int a);
extern void func_0c1ecb90(int a, int b);
extern void func_0c1ecc30(void *p);
extern char dat_0c228510;
extern char dat_0c228518;
extern char dat_0c228534;
extern char dat_0c228554;
extern int dat_0c283ee8;
extern int dat_0c283ee0;
extern int dat_0c283eec[];
extern int dat_0c283f0c[];
extern int dat_0c352324[];

void func_0c0221d8(void)
{
    void *p;
    int i;

    func_0c02aa78();
    func_0c02aaac();
    if (dat_0c283ee4 == 0) {
        func_0c1e9b20();
        func_0c021bde();
        func_0c1e9b20();
    }
    p = dat_0c238e78[**dat_0c283e6c];
    i = 0xb4;
    do {
        if (func_0c021aa0())
            func_0c021b68();
        func_0c02215e(p);
        func_0c1e9b20();
        i = i - 1;
        if (dat_0c2d6f24 & 0x360)
            i = 0;
    } while (i);
    if (dat_0c283ee4 == 1) {
        for (;;) {
            if (func_0c021aa0())
                func_0c021b68();
            func_0c1eca20(16);
            func_0c1ecc20(0xffff0000);
            func_0c1ecb90(18, 10);
            func_0c1ecc30(&dat_0c228510);
            func_0c1ecb90(9, 12);
            func_0c1ecc30(&dat_0c228518);
            func_0c1e9b20();
        }
    }
    if (dat_0c283ee4 == 2) {
        for (;;) {
            if (func_0c021aa0())
                func_0c021b68();
            func_0c1eca20(16);
            func_0c1ecc20(0xffff0000);
            func_0c1ecb90(18, 10);
            func_0c1ecc30(&dat_0c228510);
            func_0c1ecb90(6, 12);
            func_0c1ecc30(&dat_0c228534);
            func_0c1ecc30(&dat_0c228554);
            func_0c1e9b20();
        }
    }
    p = dat_0c238e98[**dat_0c283e6c];
    i = 0xb4;
    do {
        if (func_0c021aa0())
            func_0c021b68();
        func_0c02215e(p);
        func_0c1e9b20();
        i = i - 1;
        if (dat_0c2d6f24 & 0x360)
            i = 0;
    } while (i);
}

void func_0c022354(void)
{
    int i;
    int j;

    dat_0c283ee8 = 0xe10;
    i = 0;
    j = 0;
    do {
        dat_0c283eec[i] = dat_0c352324[i + 8];
        if (dat_0c283ee0 == 2)
            dat_0c283f0c[j] = dat_0c352324[j + 16];
        i = i + 1;
        j = j + 1;
    } while (i < 8);
}
