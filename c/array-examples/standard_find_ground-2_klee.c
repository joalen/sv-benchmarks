extern void abort(void);
#include <assert.h>
#include <klee/klee.h> 

void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define N 100000


int main ( ) {
  int a[N]; int e = __VERIFIER_nondet_int();
	
  klee_make_symbolic(&a, sizeof(a), "a");
  klee_make_symbolic(&e, sizeof(e), "e");

	for (int j = 0; j < N ; j++ ) {
    a[j] = __VERIFIER_nondet_int();
  }
	
  int i = 0;
  while( i < N && a[i] != e ) {
    i = i + 1;
  }
  
  int x;
    klee_make_symbolic(&x, sizeof(int), "x");
  for ( x = 0 ; x < i ; x++ ) {
    __VERIFIER_assert(  a[x] != e  );
  }
  return 0;
}
