#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
    int y;
    int z;
    klee_make_symbolic(&z, sizeof(int), "z");
    int res;
    klee_make_symbolic(&res, sizeof(int), "res");
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    res = 0;
    
    while (y > 0) {
        z = x;
        x = y-1;
        y = z;
        res = res+1;
    }
    
    res = res + x;
    
    return 0;
}
