#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int a;
    klee_make_symbolic(&a, sizeof(int), "a");
    int b;
    klee_make_symbolic(&b, sizeof(int), "b");
    int am;
    klee_make_symbolic(&am, sizeof(int), "am");
    int bm;
    klee_make_symbolic(&bm, sizeof(int), "bm");
    am = a;
    bm = b;
    
    while (am != bm) {
        if (am > bm) {
            bm = bm+b;
        } else {
            am = am+a;
        }
    }

    return 0;
}
