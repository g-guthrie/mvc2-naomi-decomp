#pragma inline(one)
static float one(void){return 1.0f;}
#pragma inline(identity)
static float identity(float x){return x;}
float local_accum(void){float y=one();y+=y;return y;}
void arg_accum(float x,float*p){x=one();x+=x;*p=x;}
float identity_accum(void){float y=identity(1.0f);y+=y;return y;}
float divide_accum(float x){float y=one();y+=y;return x/y;}
void store_accum(float*p){float y=one();y+=y;*p=y;}
float one_int(int n){float y=one();return n?y+y:y;}
