/* Unit 0x0c033450 size 632. No verified twin. 43/632: first function
 * shares the w8-decrement template with 0x0c032b58; remaining diffs
 * start at r4 vs r3 on *dat_0c2d6f84. */
struct G_0c2d6f84 {
    unsigned char b0, b1, b2, b3, b4, b5, b6, b7;
    short w8, w10, w12, w14;
    unsigned char pad[0x2c - 0x10];
    unsigned char b2c;
};

struct Rec24 {
    unsigned char b[24];
};

extern struct G_0c2d6f84 *dat_0c2d6f84;
extern unsigned char dat_0c2d96a8;
extern unsigned char dat_0c2d96a9;
extern unsigned char dat_0c22da10[];
extern struct Rec24 dat_0c2f8720[];
extern struct Rec24 dat_0c2f8528[];
extern unsigned char dat_0c22d770[];
extern unsigned char dat_0c22d968[];
extern unsigned char dat_0c2f8534[];
extern void func_0c033d16(int, int);
extern void func_0c02c9d8(int, int);
extern void func_0c0241f8(void);
extern void func_0c0275dc(void);
extern void func_0c0267ce(void);
extern void func_0c037354(void);
extern void func_0c033cbe(void);
extern void func_0c033cd8(void);
extern void func_0c034358(void);

void func_0c033450(void)
{
    struct G_0c2d6f84 *g;

    g = dat_0c2d6f84;
    if ((g->w8 = g->w8 - 1) == 0)
        dat_0c2d6f84->b4 = dat_0c2d6f84->b4 + 1;
    g = dat_0c2d6f84;
    if (g->w8 == 0x168)
        g->w14 = 1;
    g = dat_0c2d6f84;
    if (g->w8 == 0x14a)
        g->w14 = 2;
    if (dat_0c2d6f84->w8 == 60)
        func_0c033d16(0, 20);
    g = dat_0c2d6f84;
    if (g->w14 == 2) {
        g->w12 = g->w12 + 1;
        g = dat_0c2d6f84;
        if (g->w12 >= 8) {
            dat_0c2d6f84->w12 = 0;
            g = dat_0c2d6f84;
            g->w10 = g->w10 + 1;
            g = dat_0c2d6f84;
            if (g->w10 >= 8)
                dat_0c2d6f84->w10 = 0;
            g = dat_0c2d6f84;
            g->b5 = g->b5 - 1;
            if (dat_0c2d6f84->b5 == (unsigned char)-2)
                dat_0c2d6f84->w14 = 3;
            dat_0c2d96a8 = 1;
            dat_0c2d96a9 = 11;
            func_0c02c9d8(dat_0c2d6f84->b5, 7 - dat_0c2d6f84->w10);
        }
    }
    func_0c0241f8();
    func_0c0275dc();
    func_0c0267ce();
}

void func_0c03351a(void)
{
    dat_0c2d6f84->b1 = 1;
    dat_0c2d6f84->b2 = 0;
    dat_0c2d6f84->b3 = 0;
    dat_0c2d6f84->b4 = 0;
    dat_0c2d6f84->b5 = 0;
    dat_0c2d6f84->b6 = 0;
    dat_0c2d6f84->b7 = 0;
    dat_0c2d6f84->b2c = dat_0c2d6f84->b2c + 1;
    func_0c037354();
    func_0c033cbe();
    func_0c033cd8();
    func_0c034358();
}

unsigned char func_0c033564(unsigned char r4)
{
    return dat_0c22da10[r4 - 32];
}

void func_0c0335a8(void)
{
    int i, j;
    unsigned char *p;
    struct Rec24 *dst;
    unsigned char *src;

    i = 0;
    j = 0;
    dst = dat_0c2f8720;
    src = dat_0c22d968;
    do { /* i is record index */
        dat_0c2f8528[i] = *(struct Rec24 *)(dat_0c22d770 + i * 24);
        dat_0c2f8720[i] = *(struct Rec24 *)(dat_0c22d770 + i * 24);
        p = (unsigned char *)dst + 12;
        {
            int n;
            n = 0;
            do {
                *p = *src;
                src = src + 1;
                n = n + 1;
                p = p + 1;
            } while (n < 4);
        }
        dat_0c2f8534[j] = func_0c033564(dat_0c2f8534[j]);
        dat_0c2f8534[j + 1] = func_0c033564(dat_0c2f8534[j + 1]);
        dat_0c2f8534[j + 2] = func_0c033564(dat_0c2f8534[j + 2]);
        dat_0c2f8534[j + 3] = func_0c033564(dat_0c2f8534[j + 3]);
        p = (unsigned char *)dat_0c2f8720 + j + 12;
        p[0] = func_0c033564(p[0]);
        p[1] = func_0c033564(p[1]);
        p[2] = func_0c033564(p[2]);
        p[3] = func_0c033564(p[3]);
        i = i + 1;
        j = j + 24;
        dst = dst + 1;
    } while (j < 0x1f8);
}

void func_0c033656(struct Rec24 *a)
{
    struct Rec24 *p;
    struct Rec24 *end;

    p = a;
    end = a + (0x1f8 / 24);
    do {
        if (p->b[12] == 42 && p->b[13] == 42 && p->b[14] == 42) {
            a->b[12] = 2;
            a->b[13] = 0;
            a->b[14] = 15;
        }
        p = p + 1;
        a = a + 1;
    } while (p < end);
}

void func_0c0336a0(void)
{
    func_0c033656(dat_0c2f8528);
    func_0c033656(dat_0c2f8720);
}
