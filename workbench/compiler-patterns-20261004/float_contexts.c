#pragma section Pliteral
float literal(float x,float *p,int n) { return 2.0f; }

#pragma section Plocal_sum
float local_sum(float x,float *p,int n) { float a=1.0f; return a+a; }

#pragma section Plocal_inc
float local_inc(float x,float *p,int n) { float a=1.0f; a+=1.0f; return a; }

#pragma section Pint_cast
float int_cast(float x,float *p,int n) { int a=2; return (float)a; }

#pragma section Pdouble_local
float double_local(float x,float *p,int n) { double a=1.0; return a+a; }

#pragma section Pconst_local
float const_local(float x,float *p,int n) { const float a=1.0f; return a+a; }

#pragma section Paddress_local
float address_local(float x,float *p,int n) { float a=1.0f; float *q=&a; return *q+*q; }

#pragma section Pstore_twice
float store_twice(float x,float *p,int n) { *p=1.0f; *p+=1.0f; return *p; }

#pragma section Pstore_read
float store_read(float x,float *p,int n) { *p=1.0f; return *p+1.0f; }

#pragma section Pbranch_merge
float branch_merge(float x,float *p,int n) { float a; if(n) a=1.0f; else a=1.0f; return a+a; }

#pragma section Psum_other
float sum_other(float x,float *p,int n) { return x+2.0f; }

#pragma section Pmul_other
float mul_other(float x,float *p,int n) { return x*2.0f; }

#pragma section Pdivide_other
float divide_other(float x,float *p,int n) { return x/2.0f; }

#pragma section Pcompare
float compare(float x,float *p,int n) { return x==2.0f; }

#pragma section Pmultiple_constants
float multiple_constants(float x,float *p,int n) { *p=1.0f; return 2.0f; }

#pragma section Pdouble_literal
float double_literal(float x,float *p,int n) { return 2.0; }

#pragma section Pcast_char
float cast_char(float x,float *p,int n) { signed char a=2; return a; }

#pragma section Plocal_array
float local_array(float x,float *p,int n) { float a[1]; a[0]=1.0f; return a[0]+a[0]; }

#pragma section Pconditionally_plus
float conditionally_plus(float x,float *p,int n) { float a=1.0f; if(n) a+=a; return a; }

#pragma section Ptwo_outputs
float two_outputs(float x,float *p,int n) { p[0]=1.0f; p[1]=2.0f; return x; }

#pragma section Psubtract
float subtract(float x,float *p,int n) { return 3.0f-1.0f; }
