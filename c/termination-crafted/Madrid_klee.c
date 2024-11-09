#include <klee/klee.h>
/*
 * Date: 2013-05-02
 * Author: heizmann@informatik.uni-freiburg.de
 *
 */
typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
    int x;
    klee_make_symbolic(&x, sizeof(int), "x");
	x = 7;
	while (true) {
		x = 2;
	}
	return 0;
}
