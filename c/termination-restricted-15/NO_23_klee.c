#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    i = 0;
    
    while (i < 100) {
        if (i < 50) { i = 51; }
        else { i = 49; }
    }
    
    return 0;
}
