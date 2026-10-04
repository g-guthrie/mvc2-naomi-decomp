#pragma inline(one)
static float one(void) { return 1.0f; }
float inlined(float x) { return x/(one()+one()); }
float inlined_local(float x) {float y=one();return x/(y+y);}
float comma_local(float x) {float z;return (z=1.0f,x/(z+z));}
float increment_twice(float x) {float z=0;z++;z++;return x/z;}
