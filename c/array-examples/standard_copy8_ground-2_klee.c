extern void abort(void);
#include <assert.h>
#include <klee/klee.h> 

void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define N 100000

int main( ) {
  int a1[N];
  int a2[N];
  int a3[N];
  int a4[N];
  int a5[N];
  int a6[N];
  int a7[N];
  int a8[N];
  int a9[N];

  klee_make_symbolic(&a1, sizeof(a1), "a1");
  klee_make_symbolic(&a2, sizeof(a2), "a2");
  klee_make_symbolic(&a3, sizeof(a3), "a3");
  klee_make_symbolic(&a4, sizeof(a4), "a4");
  klee_make_symbolic(&a5, sizeof(a5), "a5");
  klee_make_symbolic(&a6, sizeof(a6), "a6");
  klee_make_symbolic(&a7, sizeof(a7), "a7");
  klee_make_symbolic(&a8, sizeof(a8), "a8");
  klee_make_symbolic(&a9, sizeof(a9), "a9");

  int a;
    klee_make_symbolic(&a, sizeof(int), "a");
  for ( a = 0 ; a < N ; a++ ) {
    a1[a] = __VERIFIER_nondet_int();
    a8[a] = __VERIFIER_nondet_int();
  }

  int i;
    klee_make_symbolic(&i, sizeof(int), "i");
  for ( i = 0 ; i < N ; i++ ) {
    a2[i] = a1[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a3[i] = a2[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a4[i] = a3[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a5[i] = a4[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a6[i] = a5[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a7[i] = a6[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a9[i] = a7[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a9[i] = a8[i];
  }
  
  int x;
    klee_make_symbolic(&x, sizeof(int), "x");
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  a1[x] == a9[x]  );
  }
  return 0;
}

