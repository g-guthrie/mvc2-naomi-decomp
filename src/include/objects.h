/* Game objects that recur across the image. One definition per object; a unit
 * that touches an object includes this file instead of declaring its own copy.
 * Members are named by their byte offset until their meaning is known. */
#ifndef OBJECTS_H
#define OBJECTS_H

/* Object of at least 0x526 bytes handled by the mask functions at 0x0c047a40. */
struct MaskTarget { unsigned char pad[0x235]; unsigned char b235; };

struct MaskObject {
    unsigned char pad0[0x38];
    float f38;
    unsigned char pad1[0x1a3 - 0x3c];
    unsigned char b1a3;
    unsigned char pad2[0x1d0 - 0x1a4];
    unsigned char b1d0;
    unsigned char pad3[0x1f9 - 0x1d1];
    unsigned char b1f9;
    unsigned short w1fa;
    unsigned char pad4[2];
    unsigned char b1fe;
    unsigned char pad5[0x20c - 0x1ff];
    struct MaskTarget *p20c;
    unsigned char pad6[0x340 - 0x210];
    unsigned short w340, w342, w344;
    unsigned char pad7[0x41c - 0x346];
    float f41c;
    unsigned char pad8[0x4aa - 0x420];
    unsigned char b4aa, b4ab;
    unsigned short w4ac;
    unsigned char pad9[0x525 - 0x4ae];
    unsigned char b525;
};

/* Second argument of func_0c047aac: an input record with a flag word at 6. */
struct MaskInput { unsigned char pad[6]; unsigned short w6; };

/* The moving object most leaf functions update: a state byte at 4, a timer at
 * 28, position at 52, velocity at 92 and acceleration at 104. */
struct Actor {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char pad1[17];
    unsigned char b24;
    unsigned char pad2[3];
    short s28;
    short s30;
    unsigned char pad3[20];
    float f52, f56, f60;
    unsigned char pad4[24];
    float f88, f92, f96, f100, f104, f108, f112;
};

/* Byte stream reader used by the script interpreter at 0x0c2007xx. */
struct ByteCursor { int cnt0; int cnt4; int cnt8; unsigned char *cur; };

#endif
