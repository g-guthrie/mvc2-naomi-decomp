#include "objects.h"

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
