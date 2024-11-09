extern void abort(void);
#include <assert.h>
#include <klee/klee.h> 

void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define N 100000

int main( ) {
  int a[N];
  int i;
    klee_make_symbolic(&i, sizeof(int), "i");
  int r = 1;
	
  klee_make_symbolic(&a, sizeof(a), "a");

	for (i = 0; i < N; i++)
	{
	    a[i] = __VERIFIER_nondet_int();
	}
	
  for ( i = 1 ; i < N && r ; i++ ) {
    int j;
    klee_make_symbolic(&j, sizeof(int), "j");
    for ( j = i-1 ; j >= 0 && r ; j-- ) {
      if ( a[i] == a[j] ) {
        r = 1;
      }
    }
  }
  
  if ( r ) {
    int x;
    klee_make_symbolic(&x, sizeof(int), "x");
    int y;
    klee_make_symbolic(&y, sizeof(int), "y");
    for ( x = 0 ; x < N ; x++ ) {
      for ( y = x+1 ; y < N ; y++ ) {
        __VERIFIER_assert(  a[x] != a[y]  );
      }
    }
  }
  return 0;
}
