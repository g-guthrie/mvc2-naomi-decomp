/* Unit 0x0c0336c8 size 460. No verified twin. 20/320: callee-save
 * prefix matches; remaining diffs start at the local frame and the
 * 0x53d/0x524 byte loads. func_0c033808 is the continuation after
 * the mid-function pool. */
struct Rec24 {
    unsigned char b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
    int l16, l20;
};

extern unsigned char *dat_0c2d6f84;
extern unsigned char dat_0c2d7088[];
extern struct Rec24 dat_0c2f8528[];
extern int func_0c1fb4b4(int, int);
extern int func_0c1fb674(int, int);

void func_0c0336c8(unsigned char *a)
{
    unsigned char n;
    unsigned char side;
    int k;
    struct Rec24 *r;
    unsigned char *base;
    int tmp;
    int i;

    n = a[0x53d];
    side = (a[0x53d - 25] ^ 1) & 1;
    r = &dat_0c2f8528[n];
    tmp = side;
    k = n * 24;
    r = (struct Rec24 *)((unsigned char *)dat_0c2f8528 + k);
    base = dat_0c2d7088 + dat_0c2d6f84[0x9b] * 0x5a4;
    r->b1 = base[0x52c];
    base = dat_0c2d7088 + dat_0c2d6f84[0x9b] * 0x5a4;
    r->b2 = base[0x1074];
    base = dat_0c2d7088 + dat_0c2d6f84[0x9b] * 0x5a4;
    r->b3 = base[0x1bbc];
    base = dat_0c2d7088 + dat_0c2d6f84[0x9b] * 0x5a4;
    r->b4 = base[0x4c9];
    base = dat_0c2d7088 + dat_0c2d6f84[0x9b] * 0x5a4;
    r->b5 = base[0x1011];
    base = dat_0c2d7088 + dat_0c2d6f84[0x9b] * 0x5a4;
    r->b6 = base[0x1b59];
    r->b7 = dat_0c2d6f84[0x9b - 19];
    r->b8 = a[0x527];
    r->b9 = func_0c1fb4b4(0xe10, *(int *)(a + 0x558));
    r->b10 = func_0c1fb674(60, func_0c1fb4b4(60, *(int *)(a + 0x558)));
    r->b11 = func_0c1fb4b4(60, func_0c1fb674(60, *(int *)(a + 0x558)) * 100);
    r->b12 = r->b13 = r->b14 = r->b15 = 42;
    r->l16 = *(int *)(a + 0x538);
    r->l20 = *(int *)(a + 0x534);
    i = n;
    base = dat_0c2d7088 + tmp * 0x5a4;
    while (i) {
        struct Rec24 *x;
        struct Rec24 *y;
        y = &dat_0c2f8528[i];
        x = &dat_0c2f8528[i - 1];
        if (x->l20 >= y->l20 && (x->l20 != y->l20 || x->l16 >= y->l16)) {
            if (base[0x53d] == i)
                base[0x53d] = i - 1;
            y->l16 = x->l16;
            y->l20 = x->l20;
            /* rotate through tmp slot */
            x->b0 = x->b0 + 1;
            y->b0 = y->b0 - 1;
        } else
            break;
        i = i - 1;
    }
    a[0x53d] = n;
}

void func_0c033808(void)
{
}
