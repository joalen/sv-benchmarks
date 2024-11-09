#include <math.h>
extern void abort(void);
#include <klee/klee.h>
#include <assert.h>
void reach_error() { assert(0); }
int main()
{
  float temp;
    klee_make_symbolic(&temp, sizeof(float), "temp");
  
  temp = 1.8e307f + 1.5e50f;	// should produce overflow -> +infinity (according to standard)
  if(!(isinf(temp))) {reach_error();abort();}
  
  float x;
    klee_make_symbolic(&x, sizeof(float), "x");
  
  x=temp-temp;
  
  // should be +inf
  if(!(isinf(temp))) {reach_error();abort();}
}
