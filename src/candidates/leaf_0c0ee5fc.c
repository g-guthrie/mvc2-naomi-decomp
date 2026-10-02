#include "objects.h"

struct Act_0c0ee5fc {
    unsigned char pad0[0x5c];
    float f92, f96;
    unsigned char pad1[0x68 - 0x64];
    float f104, f108;
    unsigned char pad2[0x141 - 0x70];
    char b141;
    unsigned char pad3[0x150 - 0x142];
    unsigned char b150, b151;
    unsigned char pad4[0x1f9 - 0x152];
    unsigned char b1f9;
};

struct Sub_0c0ee5fc {
    unsigned char pad[4];
    unsigned char b4;
};

typedef void (*ActorHandler)(struct Actor *, struct ActorSub2a4 *);
extern ActorHandler table_0c249f24[];
extern char func_0c02a026(struct Act_0c0ee5fc *);
extern void func_0c02a39a(struct Act_0c0ee5fc *, int);
extern void func_0c0437b8(struct Act_0c0ee5fc *);
extern void func_0c0438de(struct Act_0c0ee5fc *);

void func_0c0ee5fc(struct Act_0c0ee5fc *a, struct Sub_0c0ee5fc *s)
{
    if ((&a->b150)[1])
        s->b4 = 1;
    if (a->b141) {
        a->b141 = 0;
        func_0c02a39a(a, 0);
    }
    if (func_0c02a026(a) < 0) {
        if (a->b1f9 == 2) {
            func_0c0438de(a);
            return;
        }
        a->f92 = 0;
        a->f96 = 0;
        a->f104 = 0;
        a->f108 = 0;
        func_0c0437b8(a);
    }
}

void func_0c0ee666(struct Actor *a)
{
    table_0c249f24[a->b6](a, &a->sub2a4);
}
