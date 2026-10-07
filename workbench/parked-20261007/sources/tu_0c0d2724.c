#include "objects.h"
extern unsigned char dat_0c248420[],dat_0c248430[],dat_0c248440[],dat_0c248450[],dat_0c248460[],dat_0c248474[],dat_0c248484[],dat_0c248494[];
extern unsigned char dat_0c2483d8[],dat_0c2483dc[],dat_0c2483e0[],dat_0c2483e4[],dat_0c2483e8[],dat_0c2483ec[];
extern unsigned char dat_0c2483f0[],dat_0c2483f4[],dat_0c2483f8[],dat_0c2483fc[],dat_0c248400[],dat_0c248404[];
extern unsigned char dat_0c248408[],dat_0c24840c[],dat_0c248410[],dat_0c248414[],dat_0c248418[],dat_0c24841c[];
extern unsigned int dat_0c2484f8[];
extern void (*table_0c248514[])(struct Actor *),(*table_0c248524[])(struct Actor *),(*table_0c248534[])(struct Actor *),(*table_0c248544[])(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern void func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c048bb0(struct Actor *,int);
extern void func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *);
extern void func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *);
unsigned char func_0c0d2808(struct Actor *a),func_0c0d284e(struct Actor *a),func_0c0d28cc(struct Actor *a),func_0c0d2938(struct Actor *a),func_0c0d297e(struct Actor *a);
unsigned char func_0c0d29c4(struct Actor *a),func_0c0d2a14(struct Actor *a),func_0c0d2a8c(struct Actor *a);
int func_0c0d2adc(struct Actor *a),func_0c0d2b1c(struct Actor *a),func_0c0d2ba4(struct Actor *a),func_0c0d2be4(struct Actor *a),func_0c0d2c1a(struct Actor *a);
void func_0c0d2cd8(struct Actor *a),func_0c0d2d8c(struct Actor *a),func_0c0d2e5c(struct Actor *a),func_0c0d2f50(struct Actor *a);
static void select_0c0d3024(struct Actor *a),punch_0c0d305c(struct Actor *a),kick_0c0d31a0(struct Actor *a);
void func_0c0d3314(struct Actor *a),func_0c0d33c8(struct Actor *a),func_0c0d3468(struct Actor *a),func_0c0d34b4(struct Actor *a),func_0c0d3530(struct Actor *a);
void func_0c0d357e(struct Actor *a),func_0c0d35e4(struct Actor *a),func_0c0d365a(struct Actor *a);
void func_0c0d2724(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c2484f8;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}
void func_0c0d2740(struct Actor *a)
{
 if(func_0c0465cc(a))return;
 if(func_0c046b6c(a))return;
 if(func_0c0469f4(a))return;
 if(func_0c046d3c(a))return;
 if(func_0c0d2a14(a))return;
 if(func_0c0d29c4(a))return;
 if(func_0c0d2a8c(a))return;
 if(func_0c0d297e(a))return;
 if(func_0c0d2938(a))return;
 if(func_0c0d284e(a))return;
 if(func_0c0d2808(a))return;
 if(func_0c0d28cc(a))return;
 if(func_0c0d2adc(a))return;
 if(func_0c0d2b1c(a))return;
 func_0c045f1c(a);func_0c0463fc(a);
}
unsigned char func_0c0d2808(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248430,a->x36c))return 0;
 func_0c047aac(a,a->x36c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0d284e(struct Actor *a)
{
 int zero;
 if(!func_0c046e7e(a,dat_0c248420,a->x374))goto fail;
 if(a->b1f9==2){if(!a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}}
 func_0c047aac(a,a->x374);
 zero=0;
 a->b5=zero;
 if(a->b1f9==2)a->b6=1;else a->b6=zero;
 a->b7=zero;a->b1e9=zero;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0d28cc(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248440,a->x37c))return 0;
 func_0c047aac(a,a->x37c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0d2938(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248450,a->x384))return 0;
 func_0c047aac(a,a->x384);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0d297e(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248460,a->x38c))return 0;
 func_0c047aac(a,a->x38c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=4;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0d29c4(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248474,a->x39c))return 0;
 else if(!*a->p40c)return 0;
 func_0c047aac(a,a->x39c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=6;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c0d2a14(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248484,a->x3a4))return 0;
 else if(!*a->p40c)return 0;
 func_0c047aac(a,a->x3a4);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=7;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c0d2a8c(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248494,a->x3ac))return 0;
 else if(!*a->p40c)return 0;
 func_0c047aac(a,a->x3ac);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=8;
 func_0c045248(a,29);return 1;
}
int func_0c0d2adc(struct Actor *a)
{
 if(!func_0c046d54(a))return 0;
 else if(!*a->p40c)return 0;
 a->b1e9=9;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;return 1;
}
int func_0c0d2b1c(struct Actor *a)
{
 if(!func_0c046dd0(a,10))return 0;
 a->b1e9=10;a->b5=0;
 func_0c045248(a,21);
 a->b6=a->b7=0;return 1;
}
int func_0c0d2b56(struct Actor *a)
{
 if(func_0c0d2ba4(a)||func_0c0d2be4(a)||func_0c0d2c1a(a))return 1;
 return 0;
}
int func_0c0d2ba4(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248484,a->x3a4)||!*a->p40c||a->b1f9==2)return 0;
 a->b258=7;return 1;
}
int func_0c0d2be4(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248474,a->x39c))return 0;
 else if(!*a->p40c)return 0;
 a->b258=6;return 1;
}
int func_0c0d2c1a(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c248494,a->x3ac))return 0;
 else if(!*a->p40c)return 0;
 a->b258=8;return 1;
}
void func_0c0d2c50(void){}
void func_0c0d2c54(struct Actor *a){table_0c248514[a->b1ff](a);}
void func_0c0d2c68(struct Actor *a){func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0d2f50(a);else func_0c0d2e5c(a);}else if(a->b1f9==1)func_0c0d2d8c(a);else func_0c0d2cd8(a);}
void func_0c0d2cd8(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:a->b158=3;a->b1a1=18;func_0c0346da(a,20);a->p3f4=dat_0c2483d8;a->b1a7=zero;break;
 case 1:a->b158=4;a->b1a1=19;func_0c0346da(a,21);a->p3f4=dat_0c2483dc;a->b1a7=1;break;
 case 2:a->b6++;a->b158=5;a->b1a1=20;func_0c0346da(a,21);a->p3f4=dat_0c2483e0;a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,7,a->b158);
}
void func_0c0d2d8c(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=6;func_0c0346da(a,20);a->p3f4=dat_0c2483d8;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=7;func_0c0346da(a,21);a->p3f4=dat_0c2483dc;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=8;func_0c0346da(a,22);a->p3f4=dat_0c2483e0;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,9,a->b158);}
void func_0c0d2e5c(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:a->b158=zero;a->b1a1=3;func_0c0346da(a,20);a->p3f4=dat_0c2483e4;a->b1a7=zero;break;
 case 1:a->b158=4;a->b1a1=22;func_0c0346da(a,21);a->p3f4=dat_0c2483e8;a->b1a7=1;break;
 case 2:
  if(a->w1fa&0x400){a->b6++;a->b158=5;a->b1a1=23;}
  else{a->b158=2;a->b1a1=5;}
  func_0c0346da(a,22);a->p3f4=dat_0c2483ec;a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,8,a->b158);
}
void func_0c0d2f50(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=9;func_0c0346da(a,20);a->p3f4=dat_0c2483e4;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=10;func_0c0346da(a,21);a->p3f4=dat_0c2483e8;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=11;func_0c0346da(a,22);a->p3f4=dat_0c2483ec;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,10,a->b158);}
void func_0c0d2ffc(struct Actor *a)
{
 if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&0xf0)))select_0c0d3024(a);
}
static void select_0c0d3024(struct Actor *a)
{
 if((unsigned char)a->b1fe==1)kick_0c0d31a0(a);
 else punch_0c0d305c(a);
}
static void punch_0c0d305c(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:
  if(a->b1d3<0)a->b158=zero;else a->b158=3;
  a->b1a1=12;func_0c0346da(a,20);
  if(!a->b1fc)a->p3f4=dat_0c2483f0;else a->p3f4=dat_0c248408;
  a->b1a7=zero;break;
 case 1:
  if(a->b1d3<0)a->b158=1;else a->b158=4;
  a->b1a1=13;func_0c0346da(a,21);
  if(!a->b1fc)a->p3f4=dat_0c2483f4;else a->p3f4=dat_0c24840c;
  a->b1a7=1;break;
 case 2:
  if(a->b1d3<0)a->b158=2;else a->b158=5;
  a->b1a1=14;func_0c0346da(a,22);
  if(!a->b1fc)a->p3f4=dat_0c2483f8;else a->p3f4=dat_0c248410;
  a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,11,a->b158);
 if(a->b1d6&15)a->b1d6--;
}
static void kick_0c0d31a0(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:
  if(a->b1d3<0)a->b158=zero;else a->b158=3;
  a->b1a1=15;func_0c0346da(a,20);
  if(!a->b1fc)a->p3f4=dat_0c2483fc;else a->p3f4=dat_0c248414;
  a->b1a7=zero;break;
 case 1:
  if(a->b1d3<0)a->b158=1;else a->b158=4;
  a->b1a1=16;func_0c0346da(a,21);
  if(!a->b1fc)a->p3f4=dat_0c248400;else a->p3f4=dat_0c248418;
  a->b1a7=1;break;
 case 2:
  if(a->b1d3<0)a->b158=2;else a->b158=5;
  a->b1a1=17;func_0c0346da(a,22);
  if(!a->b1fc)a->p3f4=dat_0c248404;else a->p3f4=dat_0c24841c;
  a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,12,a->b158);
 if(a->b1d6&0xf0)a->b1d6-=16;
}
void func_0c0d32f2(struct Actor *a){table_0c248524[a->b1ff](a);}
void func_0c0d3306(struct Actor *a){func_0c043352(a);func_0c0d3314(a);}
void func_0c0d3314(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0d3530(a);else func_0c0d34b4(a);}
 else{if(a->b1f9==1)func_0c0d3468(a);else func_0c0d33c8(a);}
}
void func_0c0d33c8(struct Actor *a)
{
 switch(a->b1e8){
 case 2:
  if(func_0c02a026(a)<0){func_0c0437b8(a);break;}
  {int zero=0;
  if(a->b6){
   switch(a->b141){case 1:a->b141=zero;a->b1a1=26;break;case 2:a->b141=zero;a->b1a1=27;break;default:goto end;}
  }else{
   if(!a->b141)break;
   a->b141=zero;a->b1a1=25;
  }
  a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;}
  break;
 case 0:case 1:
  if(func_0c02a026(a)<0)func_0c0437b8(a);
  break;
 }
end:;
}
void func_0c0d3468(struct Actor *a)
{
 switch(a->b1e8){case 0:case 1:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}
}
void func_0c0d34b4(struct Actor *a)
{
 switch(a->b1e8){
 case 2:
  if(!a->b6)goto common;
  if(func_0c02a026(a)<0){func_0c0437b8(a);break;}
  if(a->b141){int zero=0;a->b141=zero;a->b1a1=28;a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;}
  break;
 case 0:case 1:
 common:
  if(func_0c02a026(a)<0)func_0c0437b8(a);
  break;
 }
}
void func_0c0d3530(struct Actor *a)
{
 switch(a->b1e8){case 0:case 1:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}
}
void func_0c0d3568(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c0d357e(a);}
void func_0c0d357e(struct Actor *a)
{
 func_0c042018(a);func_0c0421b8(a);
 if((unsigned char)a->b1fe==1)func_0c0d365a(a);else func_0c0d35e4(a);
 if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c0d35e4(struct Actor *a)
{
 switch(a->b1e8){
 case 1:
  if(func_0c02a026(a)<0){func_0c0438de(a);break;}
  if(a->b141){int zero=0;a->b141=zero;a->b1a1=29;a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;}
  break;
 case 0:case 2:
  if(func_0c02a026(a)<0)func_0c0438de(a);
  break;
 }
}
void func_0c0d365a(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0d3694(struct Actor *a)
{
    if (!a->b6) {
        func_0c044cbc(a);
        a->b6++;
        a->b1f9 = 1;
        func_0c02a0c4(a, 20, 5);
        a->b1a1 = 72;
        a->w1ac = 0;
        a->b19e = 0;
        *(unsigned int *)&a->p1c4 = 0;
        dat_0c2f83f8->arr[a->b2]++;
        func_0c0346da(a, 22);
        func_0c048bb0(a, 5);
    }
    if ((*(unsigned char *)((char *)a + 0x1ff)) == 3) func_0c043352(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    func_0c044df4(a);
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}
void func_0c0d375c(struct Actor *a){table_0c248534[a->b6](a);}
void func_0c0d376e(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){
  a->b6++;
  a->b141=0;
  a->s28=18;
  if(a->b1d2)a->f92=19.166666031f;else a->f92=-19.166666031f;
  if(a->b1d2)a->f104=-0.72916663f;else a->f104=0.72916663f;
  a->f96=9.642857f;
  a->f108=-1.0044643f;
 }
}
void func_0c0d3812(struct Actor *a)
{
 func_0c02a026(a);
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!--a->s28){
  a->b6++;
  if(a->b1d2)a->f104=-0.72916663f;else a->f104=-0.72916663f;
  a->f108=-1.0044643f;
  func_0c02a0c4(a,2,2);
 }
}
void func_0c0d3890(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!a->b141)func_0c02a026(a);
 if(!(a->f56>a->f41c)){
  a->b6++;
  a->f56=a->f41c;
  a->b1f9=0;
  a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 }
}
void func_0c0d3914(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0d3936(struct Actor *a){table_0c248544[a->b6](a);}
