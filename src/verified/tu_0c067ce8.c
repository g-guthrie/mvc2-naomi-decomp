#include "objects.h"
extern unsigned char dat_0c2405dc[], dat_0c2405ec[], dat_0c2405fc[];
extern unsigned char dat_0c240550[], dat_0c240560[], dat_0c240570[];
extern unsigned char func_0c046e7e(struct Actor *, unsigned char *, unsigned char *);
extern void func_0c047aac(struct Actor *, unsigned char *), func_0c045248(struct Actor *, int);
unsigned char func_0c067ce8(struct Actor *a)
{
  struct ActorSub2a4 *context = &a->sub2a4;
  if (!func_0c046e7e(a, dat_0c2405dc, a->x36c)) return 0;
  if (!*a->p40c) return 0;
  if (context->b0) return 0;
  func_0c047aac(a, a->x36c);
  a->b5 = 0; a->b7 = 0; a->b6 = 0; a->b1e9 = 12;
  func_0c045248(a, 29);
  return 1;
}
unsigned char func_0c067d4e(struct Actor *a)
{
  struct ActorSub2a4 *context = &a->sub2a4;
  if (!func_0c046e7e(a, dat_0c2405ec, a->x374)) return 0;
  if (!*a->p40c) return 0;
  if (context->b0) return 0;
  func_0c047aac(a, a->x374);
  a->b5 = 0; a->b7 = 0; a->b6 = 0; a->b1e9 = 10;
  func_0c045248(a, 29);
  return 1;
}
unsigned char func_0c067db4(struct Actor *a)
{
  struct ActorSub2a4 *context = &a->sub2a4;
  if (!func_0c046e7e(a, dat_0c2405fc, a->x37c)) return 0;
  if (!*a->p40c) return 0;
  if (context->b0) return 0;
  func_0c047aac(a, a->x37c);
  a->b5 = 0; a->b7 = 0; a->b6 = 0; a->b1e9 = 4;
  func_0c045248(a, 29);
  return 1;
}
unsigned char func_0c067e3e(struct Actor *a)
{
  if (!func_0c046e7e(a, dat_0c240550, a->x384)) return 0;
  func_0c047aac(a, a->x384);
  a->b5 = 0; a->b7 = 0; a->b6 = 0; a->b1e9 = 5;
  func_0c045248(a, 21);
  return 1;
}
unsigned char func_0c067e84(struct Actor *a)
{
  if (!func_0c046e7e(a, dat_0c240560, a->x38c)) return 0;
  func_0c047aac(a, a->x38c);
  a->b5 = 0; a->b7 = 0; a->b6 = 0; a->b1e9 = 6;
  func_0c045248(a, 21);
  return 1;
}
unsigned char func_0c067eca(struct Actor *a)
{
  if (!func_0c046e7e(a, dat_0c240570, a->x394)) goto fail;
  if (!a->b1fc) {
    if (a->b1d4) { fail: return 0; }
    a->b1d4++;
  }
  func_0c047aac(a, a->x394);
  a->b5 = 0; a->b7 = 0; a->b6 = 0; a->b1e9 = 7;
  func_0c045248(a, 21);
  return 1;
}
