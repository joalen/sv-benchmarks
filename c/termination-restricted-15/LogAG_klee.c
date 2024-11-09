#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
    int xtmp;
    klee_make_symbolic(&xtmp, sizeof(int), "xtmp");
    int res;
    klee_make_symbolic(&res, sizeof(int), "res");
    int restmp;
    klee_make_symbolic(&restmp, sizeof(int), "restmp");
    x = __VERIFIER_nondet_int();
    res = 0;
    
    while (x > 1) {
        xtmp = x-2;
        restmp = 0;
        
        while (xtmp > 1) {
            xtmp = xtmp-2;
            restmp = restmp+1;
        }
        
        x = xtmp+1;
        res = res+1;
        
    }
    
    return 0;
}

