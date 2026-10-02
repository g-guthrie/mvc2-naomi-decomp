struct Sub_u06808c {
    unsigned char pad[3];
    unsigned char b3;
};

struct Obj_u06808c {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char pad1[0x1d4 - 8];
    char b1d4;
    unsigned char pad2[0x1e9 - 0x1d5];
    unsigned char b1e9;
    unsigned char pad3[0x1fc - 0x1ea];
    char b1fc;
    unsigned char pad4[0x2a4 - 0x1fd];
    struct Sub_u06808c sub2a4;
    unsigned char pad5[0x3bc - 0x2a8];
    unsigned char s3bc[8];
    unsigned char s3c4[8];
    unsigned char s3cc[8];
};

extern unsigned char func_0c046e7e(struct Obj_u06808c *, void *, void *);
extern unsigned char func_0c047068(struct Obj_u06808c *, void *, void *);
extern void func_0c047aac(struct Obj_u06808c *, void *);
extern void func_0c045248(struct Obj_u06808c *, int);
extern int dat_0c240540;
extern int dat_0c240580;
extern int dat_0c2405be;

int func_0c06808c(struct Obj_u06808c *o)
{
    if (!func_0c046e7e(o, &dat_0c240540, o->s3bc))
        return 0;
    else if (!o->b1fc) {
        if (o->b1d4)
            return 0;
        o->b1d4++;
    }
    func_0c047aac(o, o->s3bc);
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    o->b1e9 = 11;
    func_0c045248(o, 21);
    return 1;
}

int func_0c0680e8(struct Obj_u06808c *o)
{
    if (!func_0c046e7e(o, &dat_0c240580, o->s3c4))
        return 0;
    func_0c047aac(o, o->s3c4);
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    o->b1e9 = 13;
    func_0c045248(o, 29);
    return 1;
}

int func_0c06812e(struct Obj_u06808c *o)
{
    struct Sub_u06808c *s = &o->sub2a4;

    if (!func_0c047068(o, &dat_0c2405be, o->s3cc))
        return 0;
    else if (s->b3)
        return 0;
    func_0c047aac(o, o->s3cc);
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    o->b1e9 = 14;
    func_0c045248(o, 21);
    return 1;
}
