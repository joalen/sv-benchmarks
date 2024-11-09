#include <klee/klee.h>
typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
	int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    int c;
    klee_make_symbolic(&c, sizeof(int), "c");
	i = 0;
    c = 0;
	while (i < 20) {
	    i = i + 1;
	    if (i <= 10) {
        } else {
            c = c + 1;
        }
	}
    return 0;
}
