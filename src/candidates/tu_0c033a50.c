/* Dispatcher (18 bytes) and reset sequence (152 bytes) match exactly.
 * Timer routine: 83/88 bytes; final counter/flag block allocates zero to r4
 * and the counter temporary to r2, versus retail r2 and r3.
 * All 328 linked bytes are present and the shared 70-byte pool is exact. */
#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern void (*table_0c23b318[])(void);
extern signed char dat_0c2f833e;
extern void func_0c022dc8(void),func_0c034358(void);
extern int func_0c1f7570(void);
extern void func_0c033cbe(void),func_0c033cd8(void);
extern void func_0c03741e(int),func_0c027ff0(int),func_0c033e6c(int,int);
extern void func_0c0343ac(int),func_0c034a1c(int),func_0c1c97e4(void);
extern void func_0c1c9a16(int),func_0c0374b8(int);
void func_0c033a50(void)
{
    table_0c23b318[dat_0c2d6f84->b8e]();
}
void func_0c033a62(void)
{
    func_0c022dc8();
    ++dat_0c2d6f84->b8e;
    dat_0c2d6f84->s8=300;dat_0c2d6f84->s14=5;
    func_0c034358();
    while(func_0c1f7570()==0) {}
    func_0c033cbe();func_0c033cd8();func_0c03741e(11);func_0c027ff0(8);
    func_0c033e6c(0,1);func_0c033e6c(1,1);func_0c0343ac(3);func_0c034a1c(47);
    func_0c1c97e4();
    func_0c1c9a16(0);func_0c1c9a16(1);func_0c1c9a16(2);func_0c1c9a16(3);
    func_0c1c9a16(4);func_0c1c9a16(5);func_0c1c9a16(6);func_0c1c9a16(7);
    func_0c0374b8(8);
}
void func_0c033afa(void)
{
    if (dat_0c2d6f84->s14) {
        if (dat_0c2d6f84->s14>2) func_0c0374b8(8);
        --dat_0c2d6f84->s14;
        return;
    }
    func_0c0374b8(11);
    --dat_0c2d6f84->s8;
    if (dat_0c2d6f84->s8<=180) {
        signed char zero=0;
        ++dat_0c2d6f84->b8e;dat_0c2f833e=zero;
    }
}
