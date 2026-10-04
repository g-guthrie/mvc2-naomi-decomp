#pragma section div_int
float div_int(float x,float y,float*p) {return x/2;}

#pragma section div_double
float div_double(float x,float y,float*p) {return x/2.0;}

#pragma section mul_double
float mul_double(float x,float y,float*p) {return x*2.0;}

#pragma section add_double
float add_double(float x,float y,float*p) {return x+2.0;}

#pragma section half
float half(float x,float y,float*p) {return x*0.5f;}

#pragma section div_sum
float div_sum(float x,float y,float*p) {return (x+y)/2.0;}

#pragma section div_sum_float
float div_sum_float(float x,float y,float*p) {return (x+y)/2.0f;}

#pragma section store_div
float store_div(float x,float y,float*p) {*p=x/2.0;}

#pragma section store_div_float
float store_div_float(float x,float y,float*p) {*p=x/2.0f;}

#pragma section store_literal
float store_literal(float x,float y,float*p) {*p=2.0;}

#pragma section store_literal_float
float store_literal_float(float x,float y,float*p) {*p=2.0f;}

#pragma section accumulate
float accumulate(float x,float y,float*p) {*p+=2.0;}

#pragma section accumulate_float
float accumulate_float(float x,float y,float*p) {*p+=2.0f;}

#pragma section double_cmp
float double_cmp(float x,float y,float*p) {return x==2.0;}

#pragma section local_double_expr
float local_double_expr(float x,float y,float*p) {double a=2.0;return x/a;}

#pragma section int_div
float int_div(float x,float y,float*p) {return x/(1+1);}
