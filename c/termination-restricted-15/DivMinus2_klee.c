#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
    int y;
    int ytmp;
    klee_make_symbolic(&ytmp, sizeof(int), "ytmp");
    int res;
    klee_make_symbolic(&res, sizeof(int), "res");
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    res = 0;
    
    while (x >= y && y > 0) {
        ytmp = y;
        while (ytmp != 0) {
            if (ytmp > 0)  {
                ytmp = ytmp - 1;
                x = x - 1;
            } else  {
                ytmp = ytmp + 1;
                x = x + 1;
            }
        }
        res = res + 1;
    }
    
    return 0;
}