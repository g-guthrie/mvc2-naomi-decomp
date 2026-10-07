/* Game objects that recur across the image. One definition per object; a unit
 * that touches an object includes this file instead of declaring its own copy.
 * Members are named by their byte offset until their meaning is known; where a
 * meaning is known the comment gives the name from docs/PLAYER.md. */
#ifndef OBJECTS_H
#define OBJECTS_H

/* Rectangle submitted to the renderer at 0x0c1f1f10. */
struct DrawRect { int flags; float x,y,z,u0,v0,u1,v1,u2,v2; int a; float b; int c,d,e,f; };

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
    char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    short w4;
    unsigned char b6, b7;
    unsigned short w8;
    short s10;
    short s12, s14;
    unsigned char byte16, byte17;
    short s18;
    unsigned char b20, b21;
    unsigned char b16;
    unsigned char pad3;
    unsigned int l24;
};

/* Signed action outcome at offset56 in an embedded actor state record. */
struct ActorActionResult56 { struct ActorSub2a4 base; unsigned char pad28[56-sizeof(struct ActorSub2a4)]; char result; };

/* Effect controls at actor +0x2a4: indexed bytes overlap the float at +4.
 * Existing halfword/action views remain unchanged. */
struct ActorSubEffectParameter { unsigned char flags[4]; float f4; };
union ActorSubEffectState { unsigned char bytes[8]; struct ActorSubEffectParameter parameter; };
struct EffectScale4 { float f116, f120, f124, f128; };
union EffectMotionStep { int integer; float real; };

struct ActorSub2a4Extended {
    struct ActorSub2a4 base;
    int l28;
    unsigned char pad[34 - sizeof(struct ActorSub2a4) - sizeof(int)];
    short s34;
    int l36;
    unsigned char b40, pad41;
    unsigned short w42;
};

/* Motion subrecord used by the phase and velocity handlers at 0x0c08a3c0. */
struct MotionContext8a3 {
    struct ActorSub2a4 base;
    unsigned char pad28[8];
    float vx, vy, target, phase, step;
    unsigned char pad56[2], flag58;
};

union ActorParameter4 { int integer; float real; };

struct AnimationFrame8 {
    unsigned char flag, event;
    char duration, attributes;
    unsigned int data;
};
struct AnimationFrame20 {
    unsigned char flag, event;
    char duration, attributes;
    unsigned int data;
    unsigned char pad8[10];
    unsigned short index;
};
struct ActorVec2 { float x, y; };
struct NaomiClock { unsigned char pad[4]; unsigned char hour, minute; unsigned char rest[6]; };
/* Command view of action storage; preserve the retail timer reads. */
struct ActorSubByteState { char b0; unsigned char b1; short w2; unsigned char b4,b5; char b6; unsigned char b7; };
/* Shared controller record: button words and the repeat timer at offsets16/18. */
struct ActorInputRecord20 {
    unsigned short buttons, w2;
    unsigned char pad[12];
    unsigned short w16, w18;
};
struct ActorSubMotionFlags { unsigned char pad[25], flag25, pad26[2], flag28, pad29; short timer30; };
struct ActorSubCommandPrefix { unsigned char pad[5]; char command; };
struct ActorCommandState { unsigned char pad0[12]; int flags12; unsigned char pad16[16]; volatile int timer32; };
struct ActorMotionFixed3 { int x_speed, y_speed, y_acceleration; };
struct ActorMotionFixed4 { int x_speed, x_acceleration, y_speed, y_acceleration; };
struct ActorMotionFloat2 { float x, y; };
struct ActorMotionFloatTable2 { struct ActorMotionFloat2 pair[2]; };
struct ActorChildReference {
    unsigned char pad[4];
    struct Actor *child;
};
struct ActorSubThrowContext { struct ActorChildReference base; unsigned char pad8[11], b19; };


struct Rect8_15dc08 { short x,half_x,y,half_y; };
struct HitboxSelection_15dc08 { short index0,pad2,index4; unsigned char pad6[10]; };

/* The moving object most leaf functions update: a state byte at 4, a timer at
 * 28, position at 52, velocity at 92 and acceleration at 104. */
struct Actor {
    unsigned char b0,b1;
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
    unsigned char b37;
    unsigned short w38;
    unsigned char pad3c[12];
    float f52, f56, f60;
    unsigned char pad4[8];
    int i72;
    unsigned char pad76[4];
    float f80, f84;
    float f88, f92, f96, f100, f104, f108, f112, f116;
    unsigned char pad5[0x88 - 120];
    float f136,f140;
    unsigned char pad5b[0xcc - 0x90];
    int i204;
    unsigned char pad5ba[0x108 - 0xd0];
    float f264;
    unsigned char pad5bb[0x12c - 0x10c];
    unsigned char b12c;
    unsigned char pad6[0x130 - 0x12d];
    unsigned short w130;
    unsigned short w132;
    unsigned char pad6b[0x13c - 0x134];
    unsigned char b13c;
    unsigned char pad6bb;
    unsigned char b13e,b13f;
    unsigned char b140;
    char b141;
    char b142;
    char b143;
    unsigned int l144;
    unsigned char pad6ca[1];
    unsigned char b149;
    unsigned char b14a;
    unsigned char b14b;
    unsigned char b14c;
    unsigned char pad6d[0x150 - 0x14d];
    unsigned short w150;
    unsigned char pad6e[2];
    struct AnimationFrame20 *p154;
    char b158, b159;
    char b15a;
    unsigned char pad7[0x168 - 0x15b];
    unsigned char *p168, *p16c;
    struct Rect8_15dc08 *p170;
    unsigned char *p174;
    unsigned char pad178[0x19c - 0x178];
    char b19c;
    char b19d;
    char b19e;
    char b19f;
    unsigned char b1a0;
    unsigned char b1a1;
    unsigned char b1a2;
    char b1a3;
    unsigned char pad7cc[0x1a7 - 0x1a4];
    unsigned char b1a7;
    unsigned char pad1a8[0x1ac - 0x1a8];
    unsigned short w1ac;
    unsigned char pad7d[0x1b0 - 0x1ae];
    struct Actor *p1b0;
    struct Actor *p1b4;
    struct Actor *p1b8;
    unsigned char *p1bc;
    struct HitboxSelection_15dc08 *p1c0;
    int p1c4;
    struct Actor *p1c8;
    unsigned char pad7e[0x1d0 - 0x1cc];
    unsigned char b1d0;
    unsigned char b1d1;
    unsigned char b1d2;
    char b1d3;
    char b1d4;
    unsigned char pad7f2;
    char b1d6;
    unsigned char pad1d7[0x1dd - 0x1d7];
    char b1dd;
    unsigned char b1de;
    unsigned char pad1df[0x1e1 - 0x1df];
    unsigned char b1e1;
    unsigned char pad1e2[0x1e6 - 0x1e2];
    unsigned short w1e6;
    unsigned char b1e8;
    unsigned char b1e9, b1ea;
    unsigned char b1eb,pad7fb[1];
    unsigned char b1ed;
    unsigned char pad7fc[0x1ef - 0x1ee];
    unsigned char b1ef;
    unsigned char pad1f0[1],b1f1;
    unsigned char b1f2;
    unsigned char b1f3;
    unsigned char b1f4;
    unsigned char b1f5;
    unsigned char b1f6, b1f7;
    unsigned char pad7ffc[0x1f9 - 0x1f8];
    unsigned char b1f9;
    unsigned short w1fa;
    unsigned char b1fc;
    unsigned char b1fd;
    char b1fe;
    unsigned char b1ff;
    unsigned char b200;
    unsigned char b201;
    unsigned char b202;
    unsigned char b203;
    unsigned char pad9a[0x205 - 0x204];
    unsigned char b205;
    unsigned char pad205[1],b207;
    float f208;
    struct Actor *p20c;
    unsigned char pad9b[0x211 - 0x210];
    unsigned char b211;
    unsigned char pad212[0x218 - 0x212];
    float f218,f21c;
    unsigned char pad220[0x229 - 0x220];
    signed char b229;
    unsigned char pad22a[0x22e - 0x22a];
    char b22e;
    unsigned char b22f,pad230,b231;
    char b232;
    unsigned char b233;
    unsigned char pad9c[1],b235;
    unsigned char b236;
    unsigned char b237;
    char b238,b239;
    unsigned char b23a,pad9bb[0x248 - 0x23b];
    unsigned char b248;
    unsigned char pad248[0x24c - 0x249];
    struct ActorVec2 position24c;
    unsigned char b254;
    unsigned char b255;
    unsigned char b256;
    unsigned char b257;
    unsigned char b258;
    unsigned char pad10b0[0x25c - 0x259];
    short s25c;
    unsigned char pad10b0b[0x278 - 0x25e];
    short s278;
    unsigned char b27a, b27b;
    unsigned char pad10b2[0x298 - 0x27c];
    float f664;
    unsigned char pad10a[3],b29f;
    unsigned short w2a0;unsigned char pad2a2[2];
    struct ActorSub2a4 sub2a4;
    unsigned char pad10b[0x2c6 - 0x2a4 - sizeof(struct ActorSub2a4)];
    short s2c6;
    int l2c8;
    unsigned char pad10c[0x320 - 0x2cc];
    int l320;
    unsigned char pad324[2];
    unsigned char b326;
    unsigned char b327;
    unsigned char b328;
    unsigned char pad11a[0x340 - 0x329];
    unsigned short w340;
    unsigned char pad342[0x348 - 0x342];
    unsigned short w348;
    unsigned short w34a;
    unsigned short w34c;
    unsigned short w34e;
    unsigned short w350;
    unsigned short w352;
    unsigned char pad354[0x364 - 0x354];
    unsigned char x364[8];
    unsigned char x36c[8];
    unsigned char x374[8];
    unsigned char x37c[8];
    unsigned char x384[8];
    unsigned char x38c[8];
    unsigned char x394[8];
    unsigned char x39c[8];
    unsigned char x3a4[8],x3ac[8],x3b4[8],pad3bc[0x3cc - 0x3bc];
    unsigned char x3cc[0x3e4 - 0x3cc];
    unsigned short w3e4;
    unsigned char pad3e6[0x3ea - 0x3e6];
    unsigned short w3ea;
    unsigned char pad3ec[0x3f0 - 0x3ec];
    unsigned char b3f0, b3f1;
    unsigned char pad12[2];
    void *p3f4;
    unsigned char b3f8, b3f9;
    unsigned char pad13[0x40c - 0x3fa];
    char *p40c;
    unsigned char pad13b[1];
    unsigned char b411;
    unsigned char pad13c[0x41c - 0x412];
    float f41c;
    unsigned short w420;
    unsigned char pad422[2];
    unsigned short w424;
    unsigned char pad426[2];
    void *p428;
    unsigned char pad14b[0x440 - 0x42c];
    unsigned char b440, b441; /* Current and previous operand state. */
    unsigned char pad442[0x446 - 0x442];
    unsigned char b446, b447;
    signed char b448;
    unsigned char pad449[3]; int l44c; unsigned int l450;
    unsigned char pad454[9],b45d,pad45e[0x495 - 0x45e];
    signed char b495; /* Operand gate flags: sign bit and bits 1/4. */
    unsigned char pad496[0x4a7 - 0x496]; signed char b4a7;
    unsigned char pad4a8[0x4b4 - 0x4a8];
    union ActorParameter4 parameter4b4;
    unsigned char pad4b8[0x4c9 - 0x4b8];
    char b4c9;
    unsigned char pad15[0x4dc - 0x4ca];
    unsigned short w4dc;
    unsigned char pad15b[0x524 - 0x4de];
    char b524;
    unsigned char b525;
    unsigned char pad526[1], b527, pad528[4]; char b52c;
    unsigned char pad52d[7]; unsigned int score534, score538; unsigned char pad53c, rank53d, pad53e; char b53f;
    unsigned char pad540[3]; char b543;
};

/* Player-slot ranking view: native slot stride 0x5a4, frame clock at0x558. */
struct PlayerSlotScore {
    struct Actor actor;
    unsigned char pad544[0x558-sizeof(struct Actor)];
    unsigned int ticks;
    unsigned char pad55c[0x5a4-0x55c];
};
/* Ranking rows: byte metadata followed by the two unsigned comparison keys. */
struct RankingRecord24 {
    unsigned char rank, characters[3], colours[3], mode, setting;
    unsigned char minutes, seconds, hundredths, name[4];
    unsigned int secondary, primary;
};

/* Global game flags record exposed through the pointer at 0x0c2d6f84. */
/* Native 20-byte effect frame row at 0x0c25b134; nine rows per variant. */
struct EffectFramePlacement20 {
    signed char enabled; unsigned char pad1; unsigned short frame;
    float scale_x, scale_y, offset_x, offset_y;
};

struct ActorFlags {
    unsigned char b0, b1; signed char b2, b3, b4, b5, b6; unsigned char b7;
    short s8, s10, s12, s14; unsigned char pad16[4]; int i20;
    signed char b24, b25; unsigned char b1a, pad27; int flags;
    int i32; unsigned char pad36[5]; signed char b41,b42; unsigned char pad43[1], b44, pad45[1];
    signed char b46; unsigned char pad47[67-47]; signed char b67;
    unsigned char pad68[71-68]; signed char b47; unsigned char pad72[0x4e-72], b4e, pad4f, b50; unsigned char pad81[0x80-0x51]; char b128;
    signed char b81; unsigned char pad130[2]; signed char b84;
    signed char b85; unsigned char pad134[0x88-0x86]; unsigned char b88; unsigned char pad137[0x8d-0x89], b8d; signed char b8e;
    unsigned char pad143[1]; int i90; void *p94; unsigned char b98,pad99, b9a; unsigned char pad9b[0xa5-0x9b]; signed char b_a5;
};
struct Glob_me00 { unsigned char pad[0x14]; int l14; };

/* Scalar control record used by 0x0c033d3e and 0x0c033db8. */
struct Control_0c2fb1f0 { unsigned char pad0[12]; int i12; unsigned char pad16[28]; float f44, f48; float values[8]; unsigned int i84; };

/* Sixty-byte slot records scanned by 0x0c1e6a68 and 0x0c1e6af4.
 * The guard at 0x0c1e6e36 also reads three signed state words. */
struct DeviceSlot60 {
    unsigned char pad0[4]; int type, id;
    unsigned char pad12[8]; int l20;
    unsigned char pad24[4]; int l28;
    unsigned char pad32[12]; int l44;
    unsigned char pad48[12];
};

/* Indexed data shared by actor constructors through the root at 0x0c2d964c. */
union ActorGlobalEntry { void *pointer; int value; };
struct ActorGlobalTable { union ActorGlobalEntry entries[36]; };
struct ActorGlobalRoot { struct ActorGlobalTable *p0; };

/* Halfword counters stored after a 124-byte header at 0x0c2f83f8. */
struct Tbl_ub3_01 { unsigned char pad[124]; short arr[100]; };

/* Linked actor variant with pointers at 0x14 and 0x18. The 0xc0-byte block at
 * 0xdc is copied by SHC's runtime helper in the 0x0c19dxxx callbacks. */
struct LinkedActorVec3 { float x, y, z; };
union LinkedActorW158 { short short_value; unsigned char bytes[2]; };
/* Actual four-byte control prefix at linked actor offset 0x12c.
 * Keep the legacy raw block view for existing verified consumers. */
struct LinkedActorPrefix12c { unsigned char b12c; signed char b12d; short w12e; };
struct LinkedActorBlock {
    unsigned char pad0[0x50];
    unsigned char b12c;
    unsigned char pad1[0x54 - 0x51];
    short w130;
    unsigned char pad1b[0x65 - 0x56];
    char b141;
    unsigned char pad1c[0x78 - 0x66];
    struct AnimationFrame20 *p154;
    union LinkedActorW158 w158;
    unsigned char pad2[0xc0 - 0x7e];
};
/* Six-byte follow offset row: signed x/y and two metadata bytes. */
struct FollowOffset15e2 { short x,y; unsigned char metadata[2]; };
/* Cached frame and signed screen offsets at actor offset 0xcc. */
struct AttachmentFrameState { short frame, x, y; };
union LinkedActorWcc {
    struct LinkedActor *pointer_value;
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
    float f92;
    float f96;
    unsigned char pad9a[4];
    float f104, f108;
    unsigned char pad9[0x84 - 112];
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
struct MotionGlobal_0c2d9260 {
    unsigned char pad[5];
    unsigned char b5, b6;
    unsigned char pad7[12 - 7];
    float f12, f16;
    unsigned char pad20[0x88 - 20];
    float f88, f8c, f90, f94, f98, f9c;
    unsigned char pada0[8];
    float fa8;
};

struct SolHorizontalTarget { unsigned char pad[16]; float x, y; };

/* Three angle words at offsets 64, 68 and 72; scalar aliases retain the
 * established accesses while the stream constructors use the full array. */
struct ObjAngleScalars { int first, l44, l48; };
union ObjAngleWords { int array[3]; struct ObjAngleScalars scalar; };

struct Obj_tu5_03 {
    unsigned char pad0[4];
    unsigned char b4;
    char b5;
    unsigned char b6, b7;
    unsigned char pad1[16 - 8];
    void (*p16)(struct Obj_tu5_03 *);
    struct Obj_tu5_03 *p20;
    struct Obj_tu5_03 *p24;
    short w28;
    short w30;
    unsigned char b32;
    unsigned char b33;
    unsigned char pad34,b35;
    unsigned char pad3[52 - 36];
    struct Vec3_tu5_03 pos;
    union ObjAngleWords angles;
    unsigned char pad5[80 - 76];
    float f80, f84, f88;
    float f92, f96, f100, f104, f108, f112, f116;
    float f120, f124, f128;
    int l84;
    float f136;
    unsigned char pad7[0xc8 - 0x8c];
    float *p200;
    int lcc;
    int i208;
    unsigned char pad8[0xe4 - 0xd4];
    int lE4, lE8, lEC;
    int lf0;
    unsigned char pad9[0x12c - 0xf4];
    unsigned char b12c;
    unsigned char pad10[0x130 - 0x12d];
    short w130;
};

struct ActorSubLaunchState36 { unsigned char pad[22], b22,b23,b24,b25,b26,b27,b28,b29,b30,b31; struct Actor *target32; };
struct ActorChildTimerReference { struct ActorChildReference base; short timer; };
struct Dat_13bb5c {
    unsigned char pad[0x3b];
    unsigned char b3b;
    unsigned short w3c;
};

/* Command-input bytes of the actor state at 0x2a4 read by the per-character
 * special-move checkers (0x0c0bfd60 unit). */
struct ActorSubMoveBytes { char b0, b1, b2, b3; unsigned char pad4; char b5, b6, b7, b8, b9; unsigned char pad10[3]; char b13, b14; unsigned char pad15[7]; char b22; unsigned char pad23[3]; char b26; unsigned char pad27[2]; unsigned char b29; short s30; };

/* Countdown words of the actor state at 0x2a4 decremented by the per-character
 * move units (offsets 8, 20 and 28 from 0x2a4). */
struct ActorSubTimers { unsigned char pad0[8]; int t8; unsigned char pad12[8]; int t20; unsigned char pad24[4]; int t28; };

/* Byte controls used by callbacks receiving the actor state at 0x2a4. */
struct ActorSubControlBytes { unsigned char pad0[2]; char b2; unsigned char pad3; char b4; unsigned char pad5[7]; char b12; unsigned char b13; };

/* Direction selection state with two 12-byte actor entries. */
struct DirectionEntry12 { struct Actor *actor; unsigned char unknown[8]; };
struct DirectionState { unsigned char unknown0[3],b3,unknown4[20]; struct DirectionEntry12 entry[2]; unsigned char unknown48[14]; signed char direction; };
/* Selection status at 0x0c2fb158. Preserve the original state/flag prefix;
 * the icon callbacks use signed selections at 48 and the two mask pairs at 60. */
struct SelectionFlags59e8 {
    unsigned char state[2], flags[2];
    unsigned char pad4[48 - 4];
    signed char choice[2];
    unsigned char pad50, combined_mask;
    unsigned char pad52[60 - 52];
    unsigned int masks[2][2];
};

/* SDK completion queue: 32-byte entries and packet callback state. */
struct SdkCompletionEntry {
    char pad[0x14];
    int completion;
    char tail[8];
};
struct SdkCompletionControl {
    struct SdkCompletionEntry *entries;
    char pad[0xe8];
    int counters[1];
};
struct SdkCompletionPacket {
    int index;
    char pad[0x18];
    void (*callback)(void *);
    void *context;
    char pad2[8];
    int state;
    int pending;
};

/* SDK consumer state at native offsets0/4/8/12. */
struct SdkByteConsumer {
    int input_count;
    int output_count;
    unsigned char *output;
    const unsigned char *input;
};

/* Timed animation records used by the 0x1abc64 and 0x1aebb8 readers. */
struct Item_0c1abc64 {
    unsigned char b0, b1, b2, b3;
    int n;
};

struct Sub_0c1abc64 {
    struct Item_0c1abc64 *p;
    unsigned char b4;
    unsigned char b5;
};

struct Host_0c1abc64 {
    unsigned char pad[0xcc];
    struct Sub_0c1abc64 sub;
};

struct Src_0c1abc64 {
    unsigned char pad[37];
    unsigned char b37;
};

/* Input-command actor view at 0x0c06808c, including three adjacent records. */
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

#endif
