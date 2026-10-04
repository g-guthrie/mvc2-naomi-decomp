#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c04337e(struct Actor *,int),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0438de(struct Actor *);
void func_0c0c5e26(struct Actor *),func_0c0c5ea8(struct Actor *),func_0c0c5f52(struct Actor *),func_0c0c5f82(struct Actor *),func_0c0c5fba(struct Actor *),func_0c0c6078(struct Actor *),func_0c0c60dc(struct Actor *),func_0c0c60ba(struct Actor *);
void func_0c0c5e18(struct Actor *a){func_0c043352(a);func_0c0c5e26(a);}
void func_0c0c5e26(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0c5fba(a);else func_0c0c5f82(a);}
 else{if(a->b1f9==1)func_0c0c5f52(a);else func_0c0c5ea8(a);}
}
void func_0c0c5ea8(struct Actor *a)
{
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 switch(a->b1e8){case 2:if(!a->b6){if(a->b141){a->b6++;if(!a->w130){a->f92=-1.66666663f;a->f104=0;}else{a->f92=1.66666663f;a->f104=-0.0f;}}}
 else if(!a->b141){a->f104=0;a->f92=0;}break;case 0:case 1:break;}
}
void func_0c0c5f52(struct Actor *a)
{
 int mode;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 mode=a->b1e8;if(mode==2)return;else if(mode==0)return;else if(mode==1)return;
}
void func_0c0c5f82(struct Actor *a)
{
 switch(a->b1e8){case 0:case 1:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}
}
void func_0c0c5fba(struct Actor *a)
{
 switch(a->b1e8){case 2:if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
  if(!a->b6){if(a->b141){a->b141=0;a->b6++;if(!a->w130){a->f92=-10.83333302f;a->f104=0.41666666f;}else{a->f92=10.83333302f;a->f104=-0.41666666f;}}}
  else func_0c04337e(a,7);break;
 case 0:case 1:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}
}
void func_0c0c6062(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c0c6078(a);}
void func_0c0c6078(struct Actor *a){func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0c60dc(a);else func_0c0c60ba(a);if(func_0c044e52(a))func_0c044f1c(a);}
void func_0c0c60ba(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0c60dc(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
