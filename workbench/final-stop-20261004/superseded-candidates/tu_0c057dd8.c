/* Five functions and both literal pools match. The launch handler at
 * 0x0c057f6c remains 122/246 bytes and is not credited. */
#include "objects.h"
struct ActorLaunchContext {
  struct Actor *target;
  struct LinkedActorVec3 position;
};
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c025900(struct Actor *, char, char);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern void (*table_0c23f7e0[])(struct Actor *);
extern void func_0c0438de(struct Actor *);
extern void func_0c056bb8(struct Actor *);
extern void func_0c048bb0(struct Actor *, int);
extern void func_0c04b5cc(struct Actor *, int, int, int);
extern struct Actor *func_0c037d54(struct Actor *);
extern void func_0c1d4610(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c044548(struct Actor *, struct Actor *);
extern short dat_0c23f7f8[];
void func_0c057dd8(struct Actor *a) {
  a->b1ea = 1;
  a->b1ed = 2;
  a->b1f5 = 2;
  a->f52 += a->f92;
  a->f92 += a->f104;
  a->f56 += a->f96;
  a->f96 += a->f108;
  if (func_0c044e52(a)) {
    func_0c043324(a);
    a->b7++;
    func_0c02a0c4(a, 15, 34);
  }
}

void func_0c057e52(struct Actor *a) {
  if (func_0c02a026(a) < 0) {
    a->b205 = 0;
    func_0c0437b8(a);
  }
}

void func_0c057e78(struct Actor *a) {
  a->f52 += a->f92;
  a->f92 += a->f104;
  a->f56 += a->f96;
  a->f96 += a->f108;
  if (func_0c02a026(a) < 0) {
    a->b205 = 0;
    func_0c0438de(a);
  } else if (a->f56 < a->f41c)
    a->f56 = a->f41c;
}
void func_0c057eec(struct Actor *a) { table_0c23f7e0[a->b6](a); }
void func_0c057efe(struct Actor *a) {
  a->b6++;
  func_0c056bb8(a);
  func_0c048bb0(a, 10);
  func_0c02a0c4(a, 15, a->b255 == 8 ? 61 : 22);
  func_0c04b5cc(a, 10, 30, 60);
}
void func_0c057f6c(struct Actor *a) {
  struct ActorLaunchContext context[1];
  a->w3e4 = 2;
  if (((char *)&a->w150)[1]) {
    func_0c02a026(a);
    if ((context[0].target = func_0c037d54(a))) {
      a->b6 = 4;
      a->b7 = 0;
      context[0].position.x = -146.66666f;
      context[0].position.y = 171.42856f;
      func_0c1d4610(a, &context[0].position);
      func_0c025900(a, 5, 5);
      a->b1f7 = 197;
      func_0c02a0c4(a, 15, 24);
      func_0c044548(a, context[0].target);
    }
    return;
  }
  a->b6++;
  if (!a->b202) {
    if (a->b255 == 8) {
      a->f92 = 5.0f;
      a->f104 = 0;
    } else {
      a->f92 = 5.83333302f;
      a->f104 = 0.013020833023f;
    }
    a->s28 = dat_0c23f7f8[(unsigned char)a->b1a3];
  } else {
    a->f92 = 3.3333333f;
    a->f104 = 0.013020833023f;
    a->s28 = (dat_0c23f7f8 + 2)[(unsigned char)a->b1a3];
  }
  if (!a->b1d2) {
    a->f92 = -a->f92;
    a->f104 = -a->f104;
  }
}
