extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

/* Complex lvalue assignment
 */

#include <klee/klee.h>
#include <assert.h>



typedef struct Toplev {
	int a;
    klee_make_symbolic(&a, sizeof(int), "a");
	struct Inner {
		int b;
    klee_make_symbolic(&b, sizeof(int), "b");
		struct Innermost{
			int c;
    klee_make_symbolic(&c, sizeof(int), "c");
		} y;
	} x;
} Stuff;

int main()
{
	struct Toplev good = { 1, {2, {3}}};
	good.x.y.c = 4;
	__VERIFIER_assert (good.x.y.c == 4);
	return 0;
}






