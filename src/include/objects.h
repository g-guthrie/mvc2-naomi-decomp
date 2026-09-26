/* Game objects that recur across the image. One definition per object; a unit
 * that touches an object includes this file instead of declaring its own copy.
 * Members are named by their byte offset until their meaning is known; where a
 * meaning is known the comment gives the name from docs/PLAYER.md. */
#ifndef OBJECTS_H
#define OBJECTS_H

/* Fade weights and color multipliers used by the rendering setup. */
struct F3_0c0268b8 { float pad0; float f4, f8, f12; };
struct FadeState { unsigned char enabled, pad[3]; int count; unsigned char pad8, red, green, blue; float value; float weights[129]; };


/* Object of at least 0x526 bytes handled by the mask functions at 0x0c047a40. */
struct MaskTarget { unsigned char pad[0x235]; unsigned char b235; };

struct MaskObject {
    unsigned char pad0[0x38];
    float f38;                  /* y_pos */
    unsigned char pad1[0x1a3 - 0x3c];
    char b1a3;         /* sp_move_strength */
    unsigned char pad2[0x1d0 - 0x1a4];
    unsigned char b1d0;         /* unk_01d0, chooses the animation to play */
    unsigned char pad3[0x1f9 - 0x1d1];
    unsigned char b1f9;         /* stance: 0 standing, 1 crouching, 2 jumping */
    unsigned short w1fa;
    unsigned char pad4[2];
    unsigned char b1fe;         /* limb_choice: 0 punch, 1 kick */
    unsigned char pad5[0x20c - 0x1ff];
    struct MaskTarget *p20c;    /* EnemyPointer */
    unsigned char pad6[0x340 - 0x210];
    unsigned short w340, w342, w344;
    unsigned char pad7[0x41c - 0x346];
    float f41c;                 /* compared against y_pos; the ground line */
    unsigned char pad8[0x4aa - 0x420];
    unsigned char b4aa, b4ab;
    unsigned short w4ac;
    unsigned char pad9[0x525 - 0x4ae];
    unsigned char b525;         /* is_cpu */
};

/* Second argument of func_0c047aac: an input record with a flag word at 6. */
struct MaskInput { unsigned char pad[6]; unsigned short w6; };

/* A child record embedded at offset 0x2a4 in actors that dispatch through the
 * 0x0c24b6a8 handler table. */
struct ActorSub2a4 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad0b;
    short w4;
    unsigned char pad1[4];
    short s10;
    unsigned char pad2[0x16 - 0xc];
    unsigned char b16;
    unsigned char pad3;
    unsigned int l24;
};

/* The moving object most leaf functions update: a state byte at 4, a timer at
 * 28, position at 52, velocity at 92 and acceleration at 104. */
struct Actor {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    struct Actor *p8, *p12;
    unsigned char pad1[4];
    struct Actor *p20;
    unsigned char b24;
    unsigned char pad2[3];
    short s28;
    short s30;
    unsigned char b32;
    unsigned char b33;
    unsigned char b34;
    unsigned char b35;
    unsigned char b36;
    unsigned char pad3b[1];
    unsigned short w38;
    unsigned char pad3c[12];
    float f52, f56, f60;
    unsigned char pad4[16];
    float f80, f84;
    float f88, f92, f96, f100, f104, f108, f112, f116;
    unsigned char pad5[0x88 - 120];
    float f136;
    unsigned char pad5b[0xcc - 0x8c];
    int i204;
    unsigned char pad5ba[0x108 - 0xd0];
    float f264;
    unsigned char pad5bb[0x12c - 0x10c];
    unsigned char b12c;
    unsigned char pad6[0x130 - 0x12d];
    unsigned short w130;
    unsigned char pad6b[0x13c - 0x132];
    unsigned char b13c;
    unsigned char pad6bb[0x140 - 0x13d];
    unsigned char b140;
    char b141;
    unsigned char pad6c[0x143 - 0x142];
    char b143;
    unsigned int l144;
    unsigned char pad6ca[0x14b - 0x148];
    unsigned char b14b;
    unsigned char pad6d[0x150 - 0x14c];
    unsigned short w150;
    unsigned char pad6e[0x158 - 0x152];
    char b158, b159;
    unsigned char pad7[0x19e - 0x15a];
    char b19e;
    char b19f;
    unsigned char b1a0;
    unsigned char b1a1;
    unsigned char pad7c[0x1a3 - 0x1a2];
    char b1a3;
    unsigned char pad7cc[0x1ac - 0x1a4];
    unsigned short w1ac;
    unsigned char pad7d[0x1b0 - 0x1ae];
    struct Actor *p1b0;
    struct Actor *p1b4;
    unsigned char pad7dd[0x1c4 - 0x1b8];
    int p1c4;
    struct Actor *p1c8;
    unsigned char pad7e[0x1d0 - 0x1cc];
    unsigned char b1d0;
    unsigned char b1d1;
    unsigned char b1d2;
    unsigned char pad7f[0x1d4 - 0x1d3];
    char b1d4;
    unsigned char pad7f2[0x1e8 - 0x1d5];
    unsigned char b1e8;
    unsigned char b1e9, b1ea;
    unsigned char pad7fb[0x1ed - 0x1eb];
    unsigned char b1ed;
    unsigned char pad7fc[0x1f2 - 0x1ee];
    unsigned char b1f2;
    unsigned char pad7ff[0x1f5 - 0x1f3];
    unsigned char b1f5;
    unsigned char b1f6, b1f7;
    unsigned char pad7ffc[0x1f9 - 0x1f8];
    unsigned char b1f9;
    unsigned short w1fa;
    unsigned char b1fc;
    unsigned char b1fd;
    char b1fe;
    unsigned char b1ff;
    unsigned char pad9[0x201 - 0x200];
    unsigned char b201;
    unsigned char pad9a[0x20c - 0x202];
    struct Actor *p20c;
    unsigned char pad9b[0x233 - 0x210];
    unsigned char b233;
    unsigned char pad9c[0x236 - 0x234];
    unsigned char b236;
    unsigned char pad9bb[0x248 - 0x237];
    unsigned char b248;
    unsigned char pad248[0x255 - 0x249];
    unsigned char b255;
    unsigned char pad10[0x258 - 0x256];
    unsigned char b258;
    unsigned char pad10b0[0x27a - 0x259];
    unsigned char b27a, b27b;
    unsigned char pad10b2[0x298 - 0x27c];
    float f664;
    unsigned char pad10a[0x2a4 - 0x29c];
    struct ActorSub2a4 sub2a4;
    unsigned char pad10b[0x2c6 - 0x2a4 - sizeof(struct ActorSub2a4)];
    short s2c6;
    unsigned char pad10c[0x327 - 0x2c8];
    unsigned char b327;
    unsigned char b328;
    unsigned char pad11a[0x34a - 0x329];
    unsigned short w34a;
    unsigned char pad11b[0x37c - 0x34c];
    unsigned char x37c[8];
    unsigned char x384[0x3e4 - 0x384];
    unsigned short w3e4;
    unsigned char pad3e6[0x3f0 - 0x3e6];
    unsigned char b3f0, b3f1;
    unsigned char pad12[0x3f8 - 0x3f2];
    unsigned char b3f8, b3f9;
    unsigned char pad13[0x40c - 0x3fa];
    char *p40c;
    unsigned char pad13b[0x41c - 0x410];
    float f41c;
    unsigned short w420;
    unsigned char pad14[0x4c9 - 0x422];
    char b4c9;
    unsigned char pad15[0x4dc - 0x4ca];
    unsigned short w4dc;
    unsigned char pad15b[0x525 - 0x4de];
    unsigned char b525;
};

/* Global game flags record exposed through the pointer at 0x0c2d6f84. */
struct ActorFlags { unsigned char pad[28]; int flags; unsigned char pad2[0x80 - 32]; char b128; };
struct Glob_me00 { unsigned char pad[0x14]; int l14; };

/* Indexed data shared by actor constructors through the root at 0x0c2d964c. */
union ActorGlobalEntry { void *pointer; int value; };
struct ActorGlobalTable { union ActorGlobalEntry entries[36]; };
struct ActorGlobalRoot { struct ActorGlobalTable *p0; };

/* Halfword counters stored after a 124-byte header at 0x0c2f83f8. */
struct Tbl_ub3_01 { unsigned char pad[124]; short arr[100]; };

/* Linked actor variant with pointers at 0x14 and 0x18. The 0xc0-byte block at
 * 0xdc is copied by SHC's runtime helper in the 0x0c19dxxx callbacks. */
struct LinkedActorVec3 { float x, y, z; };
struct LinkedActorBlock {
    unsigned char pad0[0x50];
    unsigned char b12c;
    unsigned char pad1[0x54 - 0x51];
    short w130;
    unsigned char pad1b[0x65 - 0x56];
    char b141;
    unsigned char pad1c[0x7c - 0x66];
    short w158;
    unsigned char pad2[0xc0 - 0x7e];
};
union LinkedActorWcc {
    short short_value;
    unsigned int dword_value;
    int arrcc[1];
};
struct LinkedActor {
    unsigned char pad0;
    unsigned char b1, b2;
    unsigned char pad1;
    unsigned char b4;
    char b5;
    unsigned char b6, b7;
    unsigned char pad2[16 - 8];
    void (*p16)(struct LinkedActor *);
    struct LinkedActor *p20, *p24;
    short s28;
    short s30;
    unsigned char b32;
    char b33;
    unsigned char b34, b35;
    unsigned char b36;
    unsigned char b37;
    unsigned short w38;
    unsigned char pad5[48 - 40];
    unsigned char b48;
    char b49;
    unsigned char pad6[52 - 50];
    float f52, f56, f60;
    unsigned char pad7[80 - 64];
    struct LinkedActorVec3 v80;
    unsigned char pad8[96 - 92];
    float f96;
    unsigned char pad9[0x84 - 100];
    void *p84;
    unsigned char pad9b[0xcc - 0x88];
    union LinkedActorWcc wcc;
    unsigned char pad10[0xdc - 0xd0];
    struct LinkedActorBlock sdc;
    unsigned char pad11[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
    unsigned char pad12[0x1d0 - 0x1a5];
    unsigned char b1d0;
};

/* Timed callback record allocated by the 0x0c1cd2c0 dispatcher. Its p84
 * callback table spans to 0xcc, where entry 18 is cleared during setup. */
struct LinkedActorDispatch;
typedef void (*LinkedActorDispatchHandler)(struct LinkedActorDispatch *);
struct LinkedActorDispatch {
    unsigned char pad0;
    unsigned char b1;
    unsigned char pad1[16 - 2];
    LinkedActorDispatchHandler p16;
    unsigned char pad2[28 - 20];
    short s28;
    unsigned char pad3[32 - 30];
    unsigned char b32;
    unsigned char pad4[0x84 - 33];
    LinkedActorDispatchHandler p84[19];
    unsigned char pad5[0x12c - 0xd0];
    unsigned char b12c;
};

/* Object shared by the me_00 and me_01 actor state machines. */
struct MeActorVec3 { float x, y, z; };
struct MeActorBlock {
    unsigned char pad0[0x50];
    unsigned char b12c;
    unsigned char pad1[3];
    unsigned short w130;
    unsigned char pad2[0x60 - 0x56];
    unsigned char b13c, b13d, b13e, b13f;
    unsigned char b140, b141;
    unsigned char pad3[0x7d - 0x66];
    unsigned char b159;
    unsigned char pad4[0xc0 - 0x7e];
};
struct MeActor {
    unsigned char b00, b01, b02, b03, b04, b05, b06, b07;
    unsigned char pad0[0x10 - 8];
    void (*p10)(struct MeActor *);
    unsigned char pad1[0x18 - 0x14];
    struct MeActor *p18;
    unsigned char pad2[0x1e - 0x1c];
    short w1e;
    unsigned char pad3[0x24 - 0x20];
    unsigned char b24;
    unsigned char pad4;
    unsigned short w26;
    unsigned char pad5[0x30 - 0x28];
    unsigned char b30;
    unsigned char pad6[0x34 - 0x31];
    float f34, f38;
    unsigned char pad7[0x50 - 0x3c];
    struct MeActorVec3 v50;
    float f5c, f60;
    unsigned char pad8[0x68 - 0x64];
    float f68, f6c;
    unsigned char pad9[0xdc - 0x70];
    struct MeActorBlock blk_dc;
    unsigned char pad13[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
    unsigned char pad14[0x1d0 - 0x1a5];
    unsigned char b1d0;
    unsigned char pad15[0x1e9 - 0x1d1];
    unsigned char b1e9;
    unsigned char pad16[0x2a4 - 0x1ea];
    struct MeActor *p2a4;
    unsigned char b2a8;
    unsigned char pad16b[0x411 - 0x2a9];
    unsigned char b411;
    unsigned char pad17[0x41c - 0x412];
    float f41c;
};

/* Type-5 timed actor allocated by the callback at 0x0c1e10e2. */
struct LinkedActorSequence {
    unsigned char pad0[16];
    void (*p16)(struct LinkedActorSequence *);
    unsigned char pad1[28 - 20];
    short s28;
    unsigned char pad2[0x84 - 30];
    int l84;
    unsigned char pad3[0xcc - 0x88];
    int lcc;
    unsigned char pad4[0x12c - 0xd0];
    unsigned char b12c;
};

/* Byte stream reader used by the script interpreter at 0x0c2007xx. */
struct ByteCursor { int cnt0; int cnt4; int cnt8; unsigned char *cur; };

/* Actor used by the 0x0c1d0a8c-0x0c1d109c callback sequence. */
struct Vec3_tu5_03 { float x, y, z; };
struct Obj_tu5_03 {
    unsigned char pad0[4];
    unsigned char b4;
    char b5;
    unsigned char pad1[16 - 6];
    void (*p16)(struct Obj_tu5_03 *);
    unsigned char pad2[28 - 20];
    short w28;
    unsigned char pad3[52 - 30];
    struct Vec3_tu5_03 pos;
    unsigned char pad4[72 - 64];
    int l48;
    unsigned char pad5[80 - 76];
    float f80, f84, f88;
    unsigned char pad6[120 - 92];
    float f120, f124, f128;
    int l84;
    unsigned char pad7[0xcc - 0x88];
    int lcc;
    unsigned char pad8[0xe4 - 0xd0];
    int lE4, lE8, lEC;
    int lf0;
    unsigned char pad9[0x12c - 0xf4];
    unsigned char b12c;
    unsigned char pad10[0x130 - 0x12d];
    short w130;
};

#endif
