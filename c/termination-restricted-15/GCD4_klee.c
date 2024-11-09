#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
    int y;
    int tmp;
    klee_make_symbolic(&tmp, sizeof(int), "tmp");
    int xtmp;
    klee_make_symbolic(&xtmp, sizeof(int), "xtmp");
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    
    while(y > 0 && x > 0) {
        tmp = y;
        xtmp = x;
        
        while(xtmp>=y && y > 0) {
            xtmp = xtmp - y;
        }
        
        y = xtmp;
        x = tmp;
    }
    
    return 0;
}