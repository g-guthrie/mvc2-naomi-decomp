/* Game objects that recur across the image. One definition per object; a unit
 * that touches an object includes this file instead of declaring its own copy.
 * Members are named by their byte offset until their meaning is known; where a
 * meaning is known the comment gives the name from docs/PLAYER.md. */
#ifndef OBJECTS_H
#define OBJECTS_H

/* Object of at least 0x526 bytes handled by the mask functions at 0x0c047a40. */
struct MaskTarget { unsigned char pad[0x235]; unsigned char b235; };

struct MaskObject {
    unsigned char pad0[5];
    char b5;
    unsigned char pad0b[0x38 - 6];
    float f38;                  /* y_pos */
    unsigned char pad1[0x14a - 0x3c];
    unsigned char b14a;
    unsigned char pad1b[0x1a3 - 0x14b];
    unsigned char b1a3;         /* sp_move_strength */
    unsigned char pad2[0x1d0 - 0x1a4];
    unsigned char b1d0;         /* unk_01d0, chooses the animation to play */
    unsigned char pad1d1;
    unsigned char b1d2;
    unsigned char pad3[0x1de - 0x1d3];
    char b1de;
    unsigned char pad3b[0x1f2 - 0x1df];
    char b1f2, b1f3;
    unsigned char pad3c[0x1f9 - 0x1f4];
    unsigned char b1f9;         /* stance: 0 standing, 1 crouching, 2 jumping */
    unsigned short w1fa;
    unsigned char pad4[2];
    unsigned char b1fe;         /* limb_choice: 0 punch, 1 kick */
    unsigned char pad5[0x20c - 0x1ff];
    struct MaskTarget *p20c;    /* EnemyPointer */
    unsigned char pad6[0x27a - 0x210];
    char b27a;
    unsigned char pad6b[0x340 - 0x27b];
    unsigned short w340, w342, w344;
    unsigned char pad34a[0x34a - 0x346];
    unsigned short w34a;
    unsigned char pad34e[0x34e - 0x34c];
    unsigned short w34e;
    unsigned char pad35c[0x35c - 0x350];
    unsigned char b35c;
    unsigned char pad7[0x41c - 0x35d];
    float f41c;                 /* compared against y_pos; the ground line */
    unsigned char pad8[0x448 - 0x420];
    unsigned char b448;
    unsigned char pad45d[0x45d - 0x449];
    unsigned char b45d;
    unsigned char pad4aa[0x4aa - 0x45e];
    unsigned char b4aa, b4ab;
    unsigned short w4ac;
    unsigned short w4ae;
    unsigned char pad9[0x525 - 0x4b0];
    unsigned char b525;         /* is_cpu */
};

/* Input/result record: flags at 2, extra flags at 6. */
struct MaskInput {
    unsigned char b0;
    char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
    unsigned char b5;
    unsigned short w6;
    unsigned short w8;
    unsigned short w10;
    unsigned short w12;
};

/* A child record embedded at offset 0x2a4 in actors that dispatch through the
 * 0x0c24b6a8 handler table. */
struct ActorSub2a4 {
    unsigned char pad[2];
    char b2;
    unsigned char b3;
    unsigned char pad1[4];
    short s8;
    short s10;
    unsigned char pad2[4];
    float f16, f20;
};

/* The moving object most leaf functions update: a state byte at 4, a timer at
 * 28, position at 52, velocity at 92 and acceleration at 104. */
struct Hitbox {
    short x, w, y, h;
};

struct HitboxSet {
    short w0, w2;
    unsigned char pad[8];
    short w12, w14;
};

struct ActorVt;
struct Actor {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char pad1[16];
    unsigned char b24;
    unsigned char pad2[3];
    short s28;
    short s30;
    unsigned char b32;
    unsigned char b33;
    unsigned char pad3[18];
    float f52, f56, f60;
    unsigned char pad4[72 - 64];
    int l72;
    unsigned char pad4b[80 - 76];
    float f80, f84;
    float f88, f92, f96, f100, f104, f108, f112, f116;
    unsigned char pad5[0x108 - 120];
    float f0108;
    unsigned char pad5b[0x12c - 0x10c];
    unsigned char b12c;
    unsigned char pad6[0x130 - 0x12d];
    short w130;
    unsigned char pad6b[0x140 - 0x132];
    unsigned char b140;
    char b141;
    unsigned char pad6c[0x14b - 0x142];
    unsigned char b14b;
    unsigned char pad6c2[0x158 - 0x14c];
    char b158, b159;
    unsigned char pad7[0x170 - 0x15a];
    struct Hitbox *p170;
    void *p174;
    unsigned char pad7aa[0x19c - 0x178];
    unsigned char b19c;
    char b19d;
    char b19e;
    unsigned char b19f;
    unsigned char b1a0;
    unsigned char b1a1;
    unsigned char b1a2;
    char b1a3;
    unsigned char b1a4;
    unsigned char b1a5;
    unsigned char b1a6;
    unsigned char pad7cc[0x1a8 - 0x1a7];
    short w1a8;
    short w1aa;
    unsigned short w1ac;
    unsigned short w1ae;
    unsigned char pad7d[0x1b4 - 0x1b0];
    struct Actor *p1b4;
    struct Actor *p1b8;
    void *p1bc;
    struct HitboxSet *p1c0;
    int p1c4;
    struct Actor *p1c8;
    unsigned char pad7e[0x1d0 - 0x1cc];
    unsigned char b1d0;
    unsigned char b1d1;
    char b1d2;
    unsigned char b1d3;
    unsigned char pad7f0[0x1d6 - 0x1d4];
    char b1d6;
    unsigned char pad7f[0x1e1 - 0x1d7];
    unsigned char b1e1;
    unsigned char pad7f1[0x1e8 - 0x1e2];
    unsigned char b1e8;
    unsigned char b1e9, b1ea;
    unsigned char b1eb;
    unsigned char b1ec;
    unsigned char b1ed;
    unsigned char b1ee;
    unsigned char pad7fc[0x1f2 - 0x1ef];
    unsigned char b1f2;
    unsigned char pad7ff[0x1f4 - 0x1f3];
    unsigned char b1f4;
    unsigned char b1f5;
    unsigned char b1f6, b1f7;
    unsigned char pad7ffc[0x1f9 - 0x1f8];
    unsigned char b1f9;
    unsigned char pad8[0x1fc - 0x1fa];
    unsigned char b1fc;
    unsigned char b1fd;
    unsigned char b1fe;         /* limb_choice: 0 punch, 1 kick */
    unsigned char pad9[0x201 - 0x1ff];
    char b201;
    unsigned char b202;
    unsigned char b203;
    unsigned char pad9a[0x205 - 0x204];
    unsigned char b205;
    unsigned char pad9c[0x207 - 0x206];
    unsigned char b207;
    float f208;
    struct Actor *p20c;
    unsigned char pad20c[0x218 - 0x210];
    float f218, f21c;
    unsigned char pad9d0[0x22e - 0x220];
    unsigned char b22e;
    unsigned char pad9d1[0x232 - 0x22f];
    unsigned char b232;
    unsigned char b233;
    unsigned char pad9d[0x235 - 0x234];
    unsigned char b235;
    unsigned char pad9d2[0x237 - 0x236];
    unsigned char b237;
    unsigned char b238;
    char b239;
    char b23a;
    unsigned char pad9e[0x248 - 0x23b];
    unsigned char b248;
    unsigned char pad9f[0x24c - 0x249];
    float f24c, f250;
    unsigned char b254;
    unsigned char b255;
    unsigned char b256;
    unsigned char pad10x[0x258 - 0x257];
    unsigned char b258;
    unsigned char pad10[0x278 - 0x259];
    unsigned short w278;
    unsigned char b27a, b27b;
    unsigned char pad10a[0x284 - 0x27c];
    float f284, f288, f28c;
    unsigned char pad10a2[0x2a4 - 0x290];
    struct ActorSub2a4 sub2a4;
    unsigned char pad10b[0x327 - 0x2bc];
    unsigned char b327;
    unsigned char b328;
    unsigned char pad11[0x340 - 0x329];
    unsigned short w340;
    unsigned char pad11b[0x34e - 0x342];
    unsigned short w34e;
    unsigned char pad11c[0x3e4 - 0x350];
    unsigned short w3e4;
    unsigned char pad11d[0x3f0 - 0x3e6];
    unsigned char b3f0, b3f1;
    unsigned char pad12[0x3f8 - 0x3f2];
    unsigned char b3f8, b3f9;
    unsigned char pad13[0x411 - 0x3fa];
    unsigned char b411;
    unsigned char pad13b[0x414 - 0x412];
    struct { unsigned int lo, hi; } s414;
    float f41c;
    unsigned short w420;
    unsigned char pad14[0x428 - 0x422];
    struct ActorVt *p428;
    unsigned char pad15[0x4c9 - 0x42c];
    char b4c9;
    unsigned char pad16[0x525 - 0x4ca];
    char b525;
};

struct ActorVt {
    unsigned char pad[16];
    void (*fn16)(struct Actor *);
    unsigned char pad1[24 - 20];
    void (*fn24)(struct Actor *);
    unsigned char pad2[44 - 28];
    void (*fn2c)(struct Actor *);
    void (*fn30)(struct Actor *);
    unsigned char pad3[56 - 52];
    void (*fn38)(struct Actor *);
    void (*fn3c)(struct Actor *);
    unsigned char pad4[68 - 64];
    void (*fn44)(struct Actor *);
    void (*fn48)(struct Actor *);
    void (*fn4c)(struct Actor *);
    unsigned char pad5[0x60 - 80];
    void (*f60)(struct Actor *);
};

/* Linked actor variant with pointers at 0x14 and 0x18. The 0xc0-byte block at
 * 0xdc is copied by SHC's runtime helper in the 0x0c19dxxx callbacks. */
struct LinkedActorVec3 { float x, y, z; };
struct LinkedActorBlock {
    unsigned char pad0[0x50];
    unsigned char b12c;
    unsigned char pad1[0x7c - 0x51];
    short w158;
    unsigned char pad2[0xc0 - 0x7e];
};
struct LinkedActor {
    unsigned char pad0;
    unsigned char b1, b2;
    unsigned char pad1;
    unsigned char b4;
    unsigned char pad2[16 - 5];
    void (*p16)(struct LinkedActor *);
    struct LinkedActor *p20, *p24;
    short s28;
    unsigned char pad3[33 - 30];
    char b33;
    unsigned char pad4[36 - 34];
    unsigned char b36;
    unsigned char pad5[48 - 37];
    unsigned char b48;
    unsigned char pad6[52 - 49];
    float f52, f56, f60;
    unsigned char pad7[80 - 64];
    struct LinkedActorVec3 v80;
    unsigned char pad8[96 - 92];
    float f96;
    unsigned char pad9[0xcc - 100];
    short wcc;
    unsigned char pad10[0xdc - 0xce];
    struct LinkedActorBlock sdc;
    unsigned char pad11[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
};

/* Byte stream reader used by the script interpreter at 0x0c2007xx. */
struct ByteCursor { int cnt0; int cnt4; int cnt8; unsigned char *cur; };

#endif
