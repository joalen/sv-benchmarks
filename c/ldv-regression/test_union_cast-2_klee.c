extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
#include <klee/klee.h>
#include <assert.h>

// #ifdef BLAST_AUTO_1

// int CURRENTLY_SAFE;
    klee_make_symbolic(&CURRENTLY_SAFE, sizeof(int), "CURRENTLY_SAFE");
// #else

int CURRENTLY_UNKNOWN;
    klee_make_symbolic(&CURRENTLY_UNKNOWN, sizeof(int), "CURRENTLY_UNKNOWN");
// #endif

// #ifdef BLAST_AUTO_1
// union X
// {
//   int y;
    klee_make_symbolic(&y, sizeof(int), "y");
//   double z;
    klee_make_symbolic(&z, sizeof(double), "z");
// };
// #else
//translated by LLVM into
struct l_struct_2E_X {
  double field0;
    klee_make_symbolic(&field0, sizeof(double), "field0");
};
// #endif

int main(void) {
// #ifdef BLAST_AUTO_1
// 	union X var;
// 	var.z = 0x1.4p+4;
// 	var.y = 10u;
// 	__VERIFIER_assert(var.y==10u);
// #else
	struct l_struct_2E_X llvm_cbe_var;
	*((&llvm_cbe_var.field0)) = 0x1.4p+4;
	*(((unsigned int *)((&llvm_cbe_var.field0)))) = 10u;
	__VERIFIER_assert(*(((unsigned int *)((&llvm_cbe_var.field0)))) == 10u);
// #endif
	return 0;
}
