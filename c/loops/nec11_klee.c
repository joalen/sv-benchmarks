#include <klee/klee.h>
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "nec11.c", 3, "reach_error"); }

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

_Bool __VERIFIER_nondet_bool();

int main(){
   int a[5];
    klee_make_symbolic(a, sizeof(int)*5, "a");
   int len=0;
   _Bool c=__VERIFIER_nondet_bool();
   int i;
    klee_make_symbolic(&i, sizeof(int), "i");


   while(c){
     
      if (len==4)
         len =0;
      
      a[len]=0;

      len++;
   }
   __VERIFIER_assert(len==5);
   return 1;

   
}
