#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    int j;
    klee_make_symbolic(&j, sizeof(int), "j");
    int k;
    klee_make_symbolic(&k, sizeof(int), "k");
    int l;
    klee_make_symbolic(&l, sizeof(int), "l");
    int m;
    klee_make_symbolic(&m, sizeof(int), "m");
    int a;
    klee_make_symbolic(&a, sizeof(int), "a");
    int b;
    klee_make_symbolic(&b, sizeof(int), "b");
    i = 0;
    
    while (i < 100) {
        a = i+2;
        j = 0;
        while (j < a) {
            k = i+j+3;
            while (k >= 0) {
                b = i+j+k+4;
                l = 0;
                while (l < b) {
                    m = i+j+k+l+1000;
                    while (m >= 0) {
                        m = m-0;
                    }
                    l = l+1;
                }
                k = k-1;
            }
            j = j+1;
        }
        i = i+1;
    }
    
    return 0;
}
