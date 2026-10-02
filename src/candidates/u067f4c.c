struct Obj_u067f4c {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char pad1[0x1e9 - 8];
    unsigned char b1e9;
    unsigned char pad2[0x39c - 0x1ea];
    unsigned char s39c[8];
    unsigned char s3a4[8];
    unsigned char s3ac[8];
    unsigned char s3b4[8];
};

extern unsigned char func_0c046e7e(struct Obj_u067f4c *, void *, void *);
extern void func_0c047aac(struct Obj_u067f4c *, void *);
extern void func_0c045248(struct Obj_u067f4c *, int);
extern int dat_0c240590;
extern int dat_0c2405cc;
extern int dat_0c240530;
extern int dat_0c2405a0;

int func_0c067f4c(struct Obj_u067f4c *o)
{
    if (!func_0c046e7e(o, &dat_0c240590, o->s39c))
        return 0;
    func_0c047aac(o, o->s39c);
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    o->b1e9 = 3;
    func_0c045248(o, 29);
    return 1;
}

int func_0c067f92(struct Obj_u067f4c *o)
{
    if (!func_0c046e7e(o, &dat_0c2405cc, o->s3a4))
        return 0;
    func_0c047aac(o, o->s3a4);
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    o->b1e9 = 8;
    func_0c045248(o, 21);
    return 1;
}

int func_0c067fd8(struct Obj_u067f4c *o)
{
    if (!func_0c046e7e(o, &dat_0c240530, o->s3ac))
        return 0;
    func_0c047aac(o, o->s3ac);
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    o->b1e9 = 0;
    func_0c045248(o, 21);
    return 1;
}

int func_0c068020(struct Obj_u067f4c *o)
{
    if (!func_0c046e7e(o, &dat_0c2405a0, o->s3b4))
        return 0;
    func_0c047aac(o, o->s3b4);
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    o->b1e9 = 9;
    func_0c045248(o, 21);
    return 1;
}
