extern void abort(void);
#include <klee/klee.h>
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
int __VERIFIER_nondet_int();

#define N 200000

int main( ) {
  int a1[N];
  int a2[N];
  
  int i; 
    klee_make_symbolic(&i, sizeof(int), "i");
  int z;
    klee_make_symbolic(&z, sizeof(int), "z");
  z = 150000;

  for ( i = 0 ; i < N ; i++ ) {
         a1[i] = __VERIFIER_nondet_int();
	 a2[i] = __VERIFIER_nondet_int();
  }

  for ( i = 0 ; i < N ; i++ ) {
      if (i != z)
         a2[i] = a1[i];
  }
  
  int x;
    klee_make_symbolic(&x, sizeof(int), "x");
  for ( x = 0 ; x < N ; x++ ) {
      if (x != z)
    __VERIFIER_assert(  a1[x] == a2[x]  );
  }
  return 0;
}

