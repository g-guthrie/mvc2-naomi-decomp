#include "objects.h"
typedef void (*ActorCallback)(struct Actor *);
extern ActorCallback table_0c242418[], table_0c242424[], table_0c242430[],
    table_0c24243c[];
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned char dat_0c2f8338[];
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *), func_0c02a39a(struct Actor *, int),
    func_0c02a0c4(struct Actor *, int, int),
    func_0c02a684(struct Actor *, int, int, int),
    func_0c195384(struct Actor *, int);
void func_0c087838(struct Actor *);
void func_0c087778(struct Actor *a) {
  func_0c02a026(a);
  if (a->b141) {
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 < a->f41c) {
      a->b6++;
      a->b7 = 0;
      a->f56 = a->f41c;
      a->b1f9 = 0;
      func_0c02a0c4(a, 18, 3);
    }
  }
}
void func_0c0877fc(struct Actor *a) {
  if (func_0c02a026(a) < 0) {
    a->b5++;
    a->b32 = (((char *)a)[6] = 0);
    func_0c02a39a(a, 0);
    func_0c02a0c4(a, 0, 0);
  }
}
void func_0c087838(struct Actor *a) {
  if (--a->s30 == 0) {
    a->s30 = 3;
    if (a->s28 == 8) {
      func_0c02a39a(a, 1);
      return;
    }
    {
      int value = a->b37 * 16;
      func_0c02a684(a, 0, value + a->s28, 1);
      a->s28++;
    }
  }
}
void func_0c08788e(struct Actor *a) { table_0c24243c[a->b6](a); }
void func_0c0878a0(struct Actor *a) {
  a->b6++;
  func_0c02a0c4(a, 18, 4);
}
