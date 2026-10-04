#include "objects.h"
extern unsigned int dat_0c2443b0[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0471ea(struct Actor *,unsigned char *,unsigned char *),func_0c047886(struct Actor *),func_0c046dd0(struct Actor *,int),func_0c04608a(struct Actor *,unsigned char *),func_0c044e52(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern int func_0c046d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c1a286c(struct Actor *,int,int),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0438de(struct Actor *);
extern struct Actor *func_0c1a1a34(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c244420[])(struct Actor *),(*table_0c244430[])(struct Actor *);
#define RESET a->b5=0;a->b7=0;a->b6=0
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define MOTION a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
extern unsigned char dat_0c24431c[],dat_0c24432c[],dat_0c244336[],dat_0c244346[],dat_0c24435a[],dat_0c24436a[],dat_0c24437e[],dat_0c24438e[],dat_0c24439e[],dat_0c2442d4[],dat_0c2442d8[],dat_0c2442dc[],dat_0c2442e0[],dat_0c2442e4[],dat_0c2442e8[],dat_0c2442ec[],dat_0c2442f0[],dat_0c2442f4[],dat_0c2442f8[],dat_0c2442fc[],dat_0c244300[],dat_0c244304[],dat_0c244308[],dat_0c24430c[],dat_0c244310[],dat_0c244314[],dat_0c244318[];
void func_0c0a70f0(struct Actor *a)
;
void func_0c0a710c(struct Actor *a);
unsigned char func_0c0a71f6(struct Actor *a);
unsigned char func_0c0a7268(struct Actor *a);
unsigned char func_0c0a7304(struct Actor *a);
unsigned char func_0c0a736a(struct Actor *a);
unsigned char func_0c0a73f0(struct Actor *a);
unsigned char func_0c0a7458(struct Actor *a);
unsigned char func_0c0a74e0(struct Actor *a);
unsigned char func_0c0a7550(struct Actor *a);
unsigned char func_0c0a75fc(struct Actor *a);
int func_0c0a7662(struct Actor *a);
int func_0c0a769c(struct Actor *a);
int func_0c0a76dc(struct Actor *a);
int func_0c0a772c(struct Actor *a);
int func_0c0a7762(struct Actor *a);
int func_0c0a7798(struct Actor *a);
void func_0c0a77d6(struct Actor *a);
void func_0c0a7864(struct Actor *a);
void func_0c0a7878(struct Actor *a);
void func_0c0a78c0(struct Actor *a);
void func_0c0a7a04(struct Actor *a);
void func_0c0a7ae0(struct Actor *a);
void func_0c0a7baa(struct Actor *a);
void func_0c0a7c7c(struct Actor *a);
void func_0c0a7cb6(struct Actor *a);
void func_0c0a7de6(struct Actor *a);
void func_0c0a7f0a(struct Actor *a);
void func_0c0a7f1e(struct Actor *a);
void func_0c0a7f2c(struct Actor *a);
void func_0c0a7fe6(struct Actor *a);
void func_0c0a80d0(struct Actor *a);
void func_0c0a815e(struct Actor *a);
void func_0c0a8252(struct Actor *a);
void func_0c0a828a(struct Actor *a);
void func_0c0a82a0(struct Actor *a);
void func_0c0a830c(struct Actor *a);
void func_0c0a83b8(struct Actor *a);
void func_0c0a70f0(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c2443b0;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

void func_0c0a710c(struct Actor *a){if(func_0c0465cc(a))return;if(func_0c046b6c(a))return;if(func_0c0469f4(a))return;if(func_0c046d3c(a))return;if(func_0c0a73f0(a))return;if(func_0c0a74e0(a))return;if(func_0c0a7550(a))return;if(func_0c0a7304(a))return;if(func_0c0a71f6(a))return;if(func_0c0a7268(a))return;if(func_0c0a736a(a))return;if(func_0c0a7458(a))return;if(func_0c0a75fc(a))return;if(func_0c0a7662(a))return;if(func_0c0a769c(a))return;if(func_0c04608a(a,a->x39c))return;func_0c045f1c(a);func_0c0463fc(a);}

unsigned char func_0c0a71f6(struct Actor *a){struct ActorSubMotionFlags *state;if(!func_0c046e7e(a,dat_0c24431c,a->x364))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}state=(struct ActorSubMotionFlags *)&a->sub2a4;if(state->timer30)return 0;func_0c047aac(a,a->x364);RESET;a->b1e9=0;func_0c045248(a,21);return 1;}

unsigned char func_0c0a7268(struct Actor *a){if(!func_0c0471ea(a,dat_0c24432c,a->x36c)||!func_0c047886(a))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x36c);RESET;a->b1e9=1;func_0c045248(a,21);return 1;}

unsigned char func_0c0a7304(struct Actor *a){if(!func_0c046e7e(a,dat_0c244336,a->x374))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x374);RESET;a->b1e9=2;func_0c045248(a,21);return 1;}

unsigned char func_0c0a736a(struct Actor *a){if(!func_0c046e7e(a,dat_0c244346,a->x37c))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x37c);RESET;a->b1e9=3;func_0c045248(a,21);return 1;}

unsigned char func_0c0a73f0(struct Actor *a){if(!func_0c046e7e(a,dat_0c24435a,a->x384))return 0;if(!*a->p40c)return 0;if(a->b1f9==2){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x384);RESET;a->b1e9=4;func_0c045248(a,29);return 1;}

unsigned char func_0c0a7458(struct Actor *a){if(!func_0c046e7e(a,dat_0c24436a,a->x38c))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x38c);RESET;a->b1e9=5;func_0c045248(a,21);return 1;}

unsigned char func_0c0a74e0(struct Actor *a){if(!func_0c046e7e(a,dat_0c24437e,a->x394))return 0;if(!*a->p40c)return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x394);RESET;a->b1e9=6;func_0c045248(a,29);return 1;}

unsigned char func_0c0a7550(struct Actor *a){if(!func_0c046e7e(a,dat_0c24438e,a->x3a4))return 0;if(!*a->p40c)return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x3a4);RESET;a->b1e9=7;func_0c045248(a,29);a->sub2a4.s10=240;if(a->b525)a->b1e9=12;return 1;}

unsigned char func_0c0a75fc(struct Actor *a){if(!func_0c046e7e(a,dat_0c24439e,a->x3ac))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x3ac);RESET;a->b1e9=11;func_0c045248(a,21);return 1;}

int func_0c0a7662(struct Actor *a){if(!func_0c046dd0(a,8))return 0;a->b1e9=8;a->b5=0;func_0c045248(a,21);a->b7=0;a->b6=0;return 1;}

int func_0c0a769c(struct Actor *a){if(!func_0c046d54(a)||!*a->p40c)return 0;a->b1e9=10;a->b5=0;func_0c045248(a,29);a->b7=0;a->b6=0;return 1;}

int func_0c0a76dc(struct Actor *a){if(func_0c0a772c(a)||func_0c0a7762(a)||func_0c0a7798(a))return 1;return 0;}

int func_0c0a772c(struct Actor *a){if(!func_0c046e7e(a,dat_0c24435a,a->x384)||!*a->p40c)return 0;a->b258=4;return 1;}

int func_0c0a7762(struct Actor *a){if(!func_0c046e7e(a,dat_0c24437e,a->x394)||!*a->p40c)return 0;a->b258=6;return 1;}

int func_0c0a7798(struct Actor *a){if(!func_0c046e7e(a,dat_0c24438e,a->x39c)||!*a->p40c)return 0;a->b258=7;a->sub2a4.s10=240;return 1;}

void func_0c0a77d6(struct Actor *a){if(a->b1d0==29){unsigned int mode=a->b1e9;if(mode!=7||mode!=12){if(!a->b1a0)a->b202=0;}return;}a->b202=0;if(a->b1d0==31&&a->b1f7==195)return;a->f80=1.0f;a->f84=1.0f;a->i72=0;}

void func_0c0a7864(struct Actor *a){table_0c244420[a->b1ff](a);}

void func_0c0a7878(struct Actor *a){func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0a7baa(a);else func_0c0a7ae0(a);}else{if(a->b1f9==1)func_0c0a7a04(a);else func_0c0a78c0(a);}}

void func_0c0a78c0(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=0;func_0c02a0c4(a,7,a->b158);func_0c1a286c(a,0,2);func_0c0346da(a,20);a->p3f4=dat_0c2442d4;a->b1a7=0;break;case 1:a->b158=1;a->b1a1=1;func_0c0346da(a,21);a->p3f4=dat_0c2442d8;a->b1a7=1;func_0c02a0c4(a,7,a->b158);func_0c1a286c(a,0,2);break;case 2:if(a->w1fa&0x800){a->b158=3;a->b1a1=18;func_0c02a0c4(a,7,a->b158);}else{a->b158=2;a->b1a1=2;func_0c02a0c4(a,7,a->b158);func_0c1a1a34(a,4,0);func_0c1a1a34(a,5,0);}func_0c0346da(a,22);a->p3f4=dat_0c2442dc;a->b1a7=2;func_0c1a286c(a,0,2);break;}RECORD;}

void func_0c0a7a04(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=6;func_0c0346da(a,20);a->p3f4=dat_0c2442d4;a->b1a7=0;break;case 1:a->b158=1;a->b1a1=7;func_0c0346da(a,21);a->p3f4=dat_0c2442d8;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=8;func_0c0346da(a,22);a->p3f4=dat_0c2442dc;a->b1a7=2;break;}RECORD;func_0c02a0c4(a,9,a->b158);}

void func_0c0a7ae0(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=3;func_0c0346da(a,20);a->p3f4=dat_0c2442e0;a->b1a7=0;func_0c02a0c4(a,8,a->b158);break;case 1:a->b158=1;a->b1a1=4;func_0c0346da(a,21);a->p3f4=dat_0c2442e4;a->b1a7=1;func_0c02a0c4(a,8,a->b158);func_0c1a286c(a,0,2);break;case 2:a->b158=2;a->b1a1=5;func_0c0346da(a,22);a->p3f4=dat_0c2442e8;a->b1a7=2;func_0c02a0c4(a,8,a->b158);break;}RECORD;}

void func_0c0a7baa(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=9;func_0c0346da(a,20);a->p3f4=dat_0c2442e0;a->b1a7=0;break;case 1:a->b158=1;a->b1a1=10;func_0c0346da(a,21);a->p3f4=dat_0c2442e4;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=11;func_0c0346da(a,22);a->p3f4=dat_0c2442e8;a->b1a7=2;break;}RECORD;func_0c02a0c4(a,10,a->b158);}

void func_0c0a7c7c(struct Actor *a){if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&240))){if((unsigned char)a->b1fe==1)func_0c0a7de6(a);else func_0c0a7cb6(a);}}

void func_0c0a7cb6(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=12;func_0c02a0c4(a,11,a->b158);func_0c1a286c(a,0,2);func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c2442ec;else a->p3f4=dat_0c244304;a->b1a7=0;break;case 1:a->b158=1;a->b1a1=13;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c2442f0;else a->p3f4=dat_0c244308;a->b1a7=1;func_0c02a0c4(a,11,a->b158);break;case 2:a->b158=2;a->b1a1=14;func_0c0346da(a,22);if(!a->b1fc)a->p3f4=dat_0c2442f4;else a->p3f4=dat_0c24430c;a->b1a7=2;func_0c02a0c4(a,11,a->b158);break;}RECORD;if(a->b1d6&15)a->b1d6--;}

void func_0c0a7de6(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=15;func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c2442f8;else a->p3f4=dat_0c244310;a->b1a7=0;break;case 1:a->b158=1;a->b1a1=16;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c2442fc;else a->p3f4=dat_0c244314;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=17;func_0c0346da(a,22);if(!a->b1fc)a->p3f4=dat_0c244300;else a->p3f4=dat_0c244318;a->b1a7=2;break;}RECORD;func_0c02a0c4(a,12,a->b158);if(a->b1d6&240)a->b1d6-=16;}

void func_0c0a7f0a(struct Actor *a){table_0c244430[a->b1ff](a);}

void func_0c0a7f1e(struct Actor *a){func_0c043352(a);func_0c0a7f2c(a);}

void func_0c0a7f2c(struct Actor *a){MOTION;func_0c044df4(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0a8252(a);else func_0c0a815e(a);}else{if(a->b1f9==1)func_0c0a80d0(a);else func_0c0a7fe6(a);}}

void func_0c0a7fe6(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;if(a->b141){float offset=a->b141;offset*=1.66666663f;if(!a->b1d2)offset=-offset;a->f52+=offset;a->b141=zero;}break;case 1:if(func_0c02a026(a)<0)goto deleted;if(a->b141){a->b141=zero;a->b1a1=25;RECORD;}break;case 0:if(func_0c02a026(a)>=0)break;deleted:func_0c0437b8(a);break;}}

void func_0c0a80d0(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;if(a->b141){float offset=a->b141;offset*=1.66666663f;if(!a->b1d2)offset=-offset;a->f52+=offset;a->b141=zero;}break;case 1:case 0:if(func_0c02a026(a)>=0)break;deleted:func_0c0437b8(a);break;}}

void func_0c0a815e(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;if(a->b141){float offset=a->b141;offset*=1.66666663f;if(!a->b1d2)offset=-offset;a->f52+=offset;a->b141=zero;}if(a->b14b){a->b14b=zero;a->b1a1=5;RECORD;}break;case 1:if(func_0c02a026(a)<0)goto deleted;if(a->b141){a->b141=zero;a->b1a1=26;RECORD;}break;case 0:if(func_0c02a026(a)>=0)break;deleted:func_0c0437b8(a);break;}}

void func_0c0a8252(struct Actor *a){switch((unsigned char)a->b1e8){case 1:case 0:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}}

void func_0c0a828a(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c0a82a0(a);}

void func_0c0a82a0(struct Actor *a){func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0a83b8(a);else func_0c0a830c(a);if(func_0c044e52(a))func_0c044f1c(a);}

void func_0c0a830c(struct Actor *a){int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;if(a->b14b){if((unsigned char)a->b14b==1)a->b1a1=14;RECORD;if((unsigned char)a->b14b==2)a->b1a1=28;RECORD;a->b14b=zero;}break;case 0:case 1:if(func_0c02a026(a)>=0)break;deleted:func_0c0438de(a);break;}}

void func_0c0a83b8(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
