/* Complete ordinary C for09DE28..09F0EC; shared actors retain their published layouts. */
#include "objects.h"
extern unsigned char dat_0c2d4724[];
extern int *dat_0c2d6f84;
extern unsigned char dat_0c2f8338;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0474f8(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c02a626(struct Actor *,int,int,int),func_0c02a0c4(struct Actor *,int,int),func_0c0346da(struct Actor *,int),func_0c044cbc(struct Actor *);
extern void (*table_0c24388c[])(struct Actor *),(*table_0c24389c[])(struct Actor *);
extern unsigned char dat_0c2436ac[];
extern unsigned char dat_0c2436b0[];
extern unsigned char dat_0c2436b4[];
extern unsigned char dat_0c2436b8[];
extern unsigned char dat_0c2436bc[];
extern unsigned char dat_0c2436c0[];
extern unsigned char dat_0c2436c4[];
extern unsigned char dat_0c2436c8[];
extern unsigned char dat_0c2436cc[];
extern unsigned char dat_0c2436d0[];
extern unsigned char dat_0c2436d4[];
extern unsigned char dat_0c2436d8[];
extern unsigned char dat_0c2436dc[];
extern unsigned char dat_0c2436e0[];
extern unsigned char dat_0c2436e4[];
extern unsigned char dat_0c2436e8[];
extern unsigned char dat_0c2436ec[];
extern unsigned char dat_0c2436f0[];
extern unsigned char dat_0c2436f4[];
extern unsigned char dat_0c2436f8[];
extern unsigned char dat_0c2436fc[];
extern unsigned char dat_0c243700[];
extern unsigned char dat_0c243704[];
extern unsigned char dat_0c243708[];
extern unsigned char dat_0c24370c[];
extern unsigned char dat_0c243710[];
extern unsigned char dat_0c243714[];
extern unsigned char dat_0c243718[];
extern unsigned char dat_0c24371c[];
extern unsigned char dat_0c243720[];
extern unsigned char dat_0c243724[];
extern unsigned char dat_0c243728[];
extern unsigned char dat_0c24372c[];
extern unsigned char dat_0c243730[];
extern unsigned char dat_0c243762[];
extern unsigned char dat_0c243772[];
extern unsigned char dat_0c243782[];
extern unsigned char dat_0c243792[];
int func_0c09de28(struct Actor *);
int func_0c09de5c(struct Actor *);
int func_0c09de92(struct Actor *);
int func_0c09dec8(struct Actor *);
int func_0c09df28(struct Actor *);
int func_0c09df60(struct Actor *);
void func_0c09df9c(struct Actor *);
void func_0c09e232(struct Actor *,unsigned char);
void func_0c09e282(struct Actor *,unsigned char);
void func_0c09e2c6(struct Actor *,unsigned char);
void func_0c09e326(struct Actor *);
void func_0c09e386(struct Actor *);
void func_0c09e43a(struct Actor *);
void func_0c09e45e(struct Actor *);
int func_0c09e48e(struct Actor *);
void func_0c09e49c(struct Actor *);
void func_0c09e4b0(struct Actor *);
void func_0c09e510(struct Actor *);
void func_0c09e64c(struct Actor *);
void func_0c09e69c(struct Actor *);
void func_0c09e944(struct Actor *);
void func_0c09eb4e(struct Actor *);
void func_0c09eca8(struct Actor *);
void func_0c09ee06(struct Actor *);
void func_0c09ee2e(struct Actor *);
void func_0c09ee3c(struct Actor *);
void func_0c09ef2e(struct Actor *);
void func_0c09f0a2(struct Actor *);

int func_0c09de28(struct Actor *a)
{
    if(func_0c09de5c(a)||func_0c09de92(a)||func_0c09dec8(a)||func_0c09df28(a))return 1;
    return 0;
}

int func_0c09de5c(struct Actor *a)
{
    if(!func_0c046e7e(a,dat_0c243762,a->x37c)||!*a->p40c)return 0;
    a->b258=3;return 1;
}

int func_0c09de92(struct Actor *a)
{
    if(!func_0c046e7e(a,dat_0c243772,a->x384)||!*a->p40c)return 0;
    a->b258=4;return 1;
}

int func_0c09dec8(struct Actor *a)
{
    if(*(short *)&a->sub2a4>0)return 0;
    if(!func_0c046e7e(a,dat_0c243782,a->x38c)||!*a->p40c)return 0;
    a->b258=5;return 1;
}

int func_0c09df28(struct Actor *a)
{
    if(!func_0c0474f8(a,dat_0c243792,a->x394)||(signed char)*a->p40c<3)return 0;
    a->b258=8;return 1;
}

int func_0c09df60(struct Actor *a)
{
    if(!a->b5)func_0c09e326(a);
    if(!(dat_0c2d6f84[7]&1))func_0c09df9c(a);
    func_0c09e386(a);return func_0c09e48e(a);
}
void func_0c09df9c(struct Actor *a)
{
    unsigned char *record=dat_0c2d4724+((int)*(short *)&a->pad6[1]+1)*48;
    unsigned short *values=(unsigned short *)(record+16);
    if(a->b159==1){
        *(int *)(record+8)=1;
        values[9]|=0xf000;values[10]|=0xf000;values[11]|=0xf000;values[12]|=0xf000;values[14]|=0xf000;
    }
    if(a->b159==2){func_0c09e232(a,10);}
    if(a->b159==3){func_0c09e232(a,11);}
    if(a->b159==4){func_0c09e232(a,12);}
    if(a->b159==5){func_0c09e232(a,10);}
    if(a->b159==6){func_0c09e232(a,10);func_0c09e232(a,12);}
    if(a->b159==7){func_0c09e232(a,12);}
    if(a->b159==8){func_0c09e232(a,10);func_0c09e232(a,12);}
    if(a->b159==9){func_0c09e232(a,9);func_0c09e232(a,10);}
    if(a->b159==10){func_0c09e232(a,9);func_0c09e2c6(a,10);}
    if(a->b159==11){func_0c09e232(a,9);func_0c09e232(a,10);}
    if(a->b159==12){func_0c09e232(a,12);func_0c09e232(a,14);}
    if(a->b159==13){func_0c09e232(a,9);}
    if(a->b159==14){func_0c09e232(a,10);func_0c09e232(a,12);func_0c09e232(a,14);}
    if(a->b159==15){func_0c09e232(a,9);func_0c09e232(a,12);}
    if(a->b159==16){func_0c09e282(a,10);func_0c09e282(a,12);}
    if(a->b159==50){func_0c09e2c6(a,10);}
    if(a->b159==52){func_0c09e2c6(a,12);}
    if(a->b159==53){func_0c09e2c6(a,10);}
    if(a->b159==54){func_0c09e2c6(a,10);func_0c09e2c6(a,12);}
    if(a->b159==55){func_0c09e2c6(a,12);}
    if(a->b159==56){func_0c09e2c6(a,10);func_0c09e2c6(a,12);}
    if(a->b159==57){func_0c09e2c6(a,9);func_0c09e2c6(a,10);}
    if(a->b159==59){func_0c09e2c6(a,9);func_0c09e2c6(a,10);}
    if(a->b159==60){func_0c09e2c6(a,12);func_0c09e2c6(a,14);}
    if(a->b159==61){func_0c09e2c6(a,9);}
    if(a->b159==62){func_0c09e2c6(a,10);func_0c09e2c6(a,12);func_0c09e2c6(a,14);}
    if(a->b159==63){func_0c09e2c6(a,9);func_0c09e2c6(a,12);}
}

void func_0c09e232(struct Actor *a,unsigned char index)
{
    unsigned char *record=dat_0c2d4724+((int)*(short *)&a->pad6[1]+1)*48;
    unsigned short *values=(unsigned short *)(record+16);
    *(int *)(record+8)=1;
    if(values[index]<=0x7000)values[index]|=0x6000;else values[index]-=0x1000;
}

void func_0c09e282(struct Actor *a,unsigned char index)
{
    unsigned char *record=dat_0c2d4724+((int)*(short *)&a->pad6[1]+1)*48;
    unsigned short *values=(unsigned short *)(record+16);
    *(int *)(record+8)=1;
    if(values[index]){values[index]-=0x1000;(void)(values[index]>0x1000);}
}

void func_0c09e2c6(struct Actor *a,unsigned char index)
{
    unsigned char *record=dat_0c2d4724+((int)*(short *)&a->pad6[1]+1)*48;
    unsigned short *values=(unsigned short *)(record+16);
    *(int *)(record+8)=1;
    if(values[index]>=0xf000)values[index]|=0xf000;else values[index]+=0x1000;
}

void func_0c09e326(struct Actor *a)
{
    unsigned char phase;
    short *sub=(short *)&a->sub2a4;
    if(a->b1d0!=20)sub[1]=0;
    if(a->b1d0==20 && sub[2]){
        phase=dat_0c2d6f84[7]%4;
        if(phase>=2){func_0c02a626(a,0,6,1);return;}
    }else sub[2]=0;
    func_0c02a626(a,0,0,1);
}
void func_0c09e386(struct Actor *a)
{
    short *sub=(short *)&a->sub2a4;
    unsigned char phase;
    if(!sub[0]||dat_0c2f8338>=5){
        sub[0]=0;
        if(sub[2])return;
    }else{
        if(!a->b411 && (short)a->w420>0){
            sub[0]--;a->b328=5;
            if(sub[2])return;
            phase=dat_0c2d6f84[7]%4;
            if(phase>=2)func_0c02a626(a,0,6,1);else func_0c02a626(a,0,7,1);
            return;
        }
        sub[0]=0;if(sub[2])return;
    }
    func_0c02a626(a,0,0,1);
}
void func_0c09e43a(struct Actor *a)
{
    if(*(short *)&a->sub2a4>0){a->b3f9=0;a->b3f8=0;}else a->b3f8=2;
    a->b328=5;
}
void func_0c09e45e(struct Actor *a)
{
    if(*(short *)&a->sub2a4>0){a->b3f9=0;a->b3f8=0;a->b328=5;}
    else{a->b3f9=0;a->b3f8=0;a->b327=0;a->b328=0;}
}
int func_0c09e48e(struct Actor *a)
{
    return *(short *)&a->sub2a4>0;
}
void func_0c09e49c(struct Actor *a)
{
    table_0c24388c[a->b1ff](a);
}
void func_0c09e4b0(struct Actor *a)
{
    func_0c044cbc(a);
    if(a->b1fe==1){if(a->b1f9==1)func_0c09eca8(a);else func_0c09eb4e(a);}
    else{if(a->b1f9==1)func_0c09e944(a);else func_0c09e510(a);}
}
void func_0c09e510(struct Actor *a)
{
    int bank=7,zero=0;
    short *sub=(short *)&a->sub2a4;
    switch(a->b1e8){
    case 0:sub[1]=1;a->b158=0;a->b1a1=0;a->p3f4=dat_0c2436ac;a->b1a7=0;break;
    case 1:sub[1]=1;a->b158=1;a->b1a1=1;a->p3f4=dat_0c2436b0;a->b1a7=1;break;
    case 2:
        if(a->b1d3){a->b158=2;a->b1a1=2;a->p3f4=dat_0c2436b4;a->b1a7=2;}
        else{
            a->f92=a->b1d2?15.833333f:-15.833333f;
            a->f104=a->b1d2?-0.104166664f:0.104166664f;
            a->b158=3;a->b1a1=21;a->p3f4=dat_0c2436f8;a->b1a7=2;bank=20;
        }
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,bank,a->b158);
}
void func_0c09e64c(struct Actor *a)
{
    func_0c044cbc(a);
    if(a->b1fe==1){if(a->b1f9==1)func_0c09eca8(a);else func_0c09eb4e(a);}
    else{if(a->b1f9==1)func_0c09e944(a);else func_0c09e69c(a);}
}

void func_0c09e69c(struct Actor *a)
{
    int extended=0,zero=0;
    short *sub=(short *)&a->sub2a4;
    sub[2]=0;if(a->b1e8>=3)sub[2]=1;
    switch(a->b1e8){
    case 0:
        sub[1]=1;
        if(a->w1fa&0x400){sub[2]=1;a->b158=5;a->b1a1=68;a->p3f4=dat_0c2436fc;extended=1;}
        else{a->b158=0;a->b1a1=0;a->p3f4=dat_0c2436ac;a->b1a7=0;}
        break;
    case 1:
        sub[1]=1;
        a->b158=1;a->b1a1=1;a->p3f4=dat_0c2436b0;a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=2;a->p3f4=dat_0c2436b4;
        if(!sub[1] && (a->w1fa&0x400)){sub[2]=1;a->b158=13;a->b1a1=76;a->p3f4=dat_0c24371c;extended=1;}
        else{
            a->b1a7=2;
            if(a->w1fa&0x800){a->b158=3;a->b1a1=19;a->p3f4=dat_0c2436f4;}
        }
        break;
    case 3:
        a->b158=6;a->b1a1=69;a->p3f4=dat_0c243700;extended=1;
        break;
    case 4:
        a->b158=7;a->b1a1=70;a->p3f4=dat_0c243704;extended=1;
        break;
    case 5:
        a->b158=8;a->b1a1=71;a->p3f4=dat_0c243708;extended=1;
        break;
    case 6:
        a->b158=9;a->b1a1=72;a->p3f4=dat_0c24370c;extended=1;
        break;
    case 7:
        a->b158=11;a->b1a1=74;a->p3f4=dat_0c243714;extended=1;
        break;
    case 8:
        a->b158=12;a->b1a1=75;a->p3f4=dat_0c243718;extended=1;
        break;
    case 9:
        a->b158=14;a->b1a1=77;a->p3f4=dat_0c243720;extended=1;
        break;
    case 10:
        a->b158=15;a->b1a1=78;a->p3f4=dat_0c243724;extended=1;
        break;
    case 11:
        a->b158=16;a->b1a1=79;a->p3f4=dat_0c243728;extended=1;
        break;
    case 12:
        a->b158=18;a->b1a1=81;a->p3f4=dat_0c243730;extended=1;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,extended?20:7,a->b158);
    if(extended)a->b1a7=zero;
}

void func_0c09e944(struct Actor *a)
{
    int extended=0,zero=0;
    short *sub=(short *)&a->sub2a4;
    sub[2]=0;if(a->b1e8>=3)sub[2]=1;
    switch(a->b1e8){
    case 0:
        sub[1]=1;
        a->b158=0;a->b1a1=6;a->p3f4=dat_0c2436ac;a->b1a7=0;
        break;
    case 1:
        sub[1]=1;
        a->b158=1;a->b1a1=7;a->p3f4=dat_0c2436b0;a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=8;a->p3f4=dat_0c2436b4;a->b1a7=2;
        break;
    case 3:
        a->b158=6;a->b1a1=69;a->p3f4=dat_0c243700;extended=1;
        break;
    case 4:
        a->b158=7;a->b1a1=70;a->p3f4=dat_0c243704;extended=1;
        break;
    case 5:
        a->b158=8;a->b1a1=71;a->p3f4=dat_0c243708;extended=1;
        break;
    case 6:
        a->b158=9;a->b1a1=72;a->p3f4=dat_0c24370c;extended=1;
        break;
    case 7:
        a->b158=11;a->b1a1=74;a->p3f4=dat_0c243714;extended=1;
        break;
    case 8:
        a->b158=12;a->b1a1=75;a->p3f4=dat_0c243718;extended=1;
        break;
    case 9:
        a->b158=14;a->b1a1=77;a->p3f4=dat_0c243720;extended=1;
        break;
    case 10:
        a->b158=15;a->b1a1=78;a->p3f4=dat_0c243724;extended=1;
        break;
    case 11:
        a->b158=16;a->b1a1=79;a->p3f4=dat_0c243728;extended=1;
        break;
    case 12:
        a->b158=18;a->b1a1=81;a->p3f4=dat_0c243730;extended=1;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,extended?20:9,a->b158);
    if(extended)a->b1a7=zero;
}

void func_0c09eb4e(struct Actor *a)
{
    int extended=0,zero=0;
    short *sub=(short *)&a->sub2a4;
    sub[2]=0;if(a->b1e8>=3)sub[2]=1;
    switch(a->b1e8){
    case 0:
        sub[1]=1;
        a->b158=0;a->b1a1=3;
        func_0c0346da(a,20);
        a->p3f4=dat_0c2436b8;a->b1a7=0;
        break;
    case 1:
        sub[1]=1;
        a->b158=1;a->b1a1=4;
        func_0c0346da(a,21);
        a->p3f4=dat_0c2436bc;a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=5;
        a->p3f4=dat_0c2436c0;a->b1a7=2;
        break;
    case 3:
        a->b158=10;a->b1a1=73;a->p3f4=dat_0c243710;extended=1;
        break;
    case 4:
        a->b158=17;a->b1a1=80;a->p3f4=dat_0c24372c;extended=1;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,extended?20:8,a->b158);
    if(extended)a->b1a7=zero;
}

void func_0c09eca8(struct Actor *a)
{
    int extended=0,zero=0;
    short *sub=(short *)&a->sub2a4;
    sub[2]=0;if(a->b1e8>=3)sub[2]=1;
    switch(a->b1e8){
    case 0:
        sub[1]=1;
        a->b158=0;a->b1a1=9;
        func_0c0346da(a,20);
        a->p3f4=dat_0c2436b8;a->b1a7=0;
        break;
    case 1:
        sub[1]=1;
        a->b158=1;a->b1a1=10;
        func_0c0346da(a,21);
        a->p3f4=dat_0c2436bc;a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=11;
        a->p3f4=dat_0c2436c0;a->b1a7=2;
        break;
    case 3:
        a->b158=10;a->b1a1=73;a->p3f4=dat_0c243710;extended=1;
        break;
    case 4:
        a->b158=17;a->b1a1=80;a->p3f4=dat_0c24372c;extended=1;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,extended?20:10,a->b158);
    if(extended)a->b1a7=zero;
}

void func_0c09ee06(struct Actor *a)
{
    if(!a->b1fe && (a->b1d6&15))goto trigger;
    if(a->b1fe && (a->b1d6&0xf0)){trigger:func_0c09ee2e(a);}
}
void func_0c09ee2e(struct Actor *a)
{
    if(a->b1fe==1)func_0c09ef2e(a);else func_0c09ee3c(a);
}

void func_0c09ee3c(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=12;
        if(!a->b1fc)a->p3f4=dat_0c2436c4;else a->p3f4=dat_0c2436dc;
        a->b1a7=0;
        break;
    case 1:
        a->b158=1;a->b1a1=13;
        if(!a->b1fc)a->p3f4=dat_0c2436c8;else a->p3f4=dat_0c2436e0;
        a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=14;
        if(!a->b1fc)a->p3f4=dat_0c2436cc;else a->p3f4=dat_0c2436e4;
        a->b1a7=2;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,11,a->b158);
    if(a->b1d6&15)a->b1d6=a->b1d6-1;
}

void func_0c09ef2e(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=15;
        func_0c0346da(a,20);
        if(!a->b1fc)a->p3f4=dat_0c2436d0;else a->p3f4=dat_0c2436e8;
        a->b1a7=0;
        break;
    case 1:
        a->b158=1;a->b1a1=16;
        func_0c0346da(a,21);
        if(!a->b1fc)a->p3f4=dat_0c2436d4;else a->p3f4=dat_0c2436ec;
        a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=17;
        if(a->w1fa&0x1000){a->b158=6;a->b1a1=20;}
        if(!a->b1fc)a->p3f4=dat_0c2436d8;else a->p3f4=dat_0c2436f0;
        a->b1a7=2;
        goto low_nibble;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,12,a->b158);
    if(a->b1d6&0xf0)a->b1d6=a->b1d6-16;
    return;
low_nibble:
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,12,a->b158);
    if(a->b1d6&15)a->b1d6=a->b1d6-1;
}

void func_0c09f0a2(struct Actor *a)
{
    table_0c24389c[a->b1ff](a);
}
