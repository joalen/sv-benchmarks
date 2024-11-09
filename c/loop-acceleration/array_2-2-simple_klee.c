extern void abort(void);
#include <klee/klee.h>
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

#define SZ 2048

int main(void) {
  int A[SZ] = {0};
  int B[SZ] = {0};
  int i;
    klee_make_symbolic(&i, sizeof(int), "i");
  int tmp;
    klee_make_symbolic(&tmp, sizeof(int), "tmp");

  for (i = 0; i < SZ; i++) {
    tmp = A[i];
    B[i] = tmp;
  }

  __VERIFIER_assert(A[SZ/2] == B[SZ/2]);
}
