extern void f(void);
#pragma section int_store_cast
float int_store_cast(float x,float*p,int*n){*n=2; return x/(float)*n;}
#pragma section cast_cond
float cast_cond(float x,float*p,int*n){return x/(float)(*n ? 2 : 2);}
#pragma section float_cond
float float_cond(float x,float*p,int*n){return x/(*n ? 2.0f : 2.0f);}
#pragma section int_branch
float int_branch(float x,float*p,int*n){int z;if(*n)z=2;else z=2;return x/z;}
#pragma section postinc
float postinc(float x,float*p,int*n){float z=1.0f; z++; return x/z;}
#pragma section preinc
float preinc(float x,float*p,int*n){float z=1.0f; return x/++z;}
#pragma section indirect_double
float indirect_double(float x,float*p,int*n){*p=1.0f;return x/(*p+*p);}
#pragma section div_assign
float div_assign(float x,float*p,int*n){*p=1.0f;return x/(*p+=*p);}
#pragma section compound_one
float compound_one(float x,float*p,int*n){*p=1.0f;return x/(*p+=1.0f);}
#pragma section ternary_one
float ternary_one(float x,float*p,int*n){float z=*n?1.0f:1.0f; return x/(z+z);}
#pragma section extern_call
float extern_call(float x,float*p,int*n){float z=1.0f;f();return x/(z+z);}
#pragma section register_sum
float register_sum(float x,float*p,int*n){register float z=1.0f;return x/(z+z);}
#pragma section int_postinc
float int_postinc(float x,float*p,int*n){int z=1;z++;return x/z;}
#pragma section float_chain
float float_chain(float x,float*p,int*n){float z=1.0f;float y=z+1.0f;return x/y;}