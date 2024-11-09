#include <klee/klee.h>
int main(void) {
    int* p;
    for(int i = 0; i < 2; i++) {
        int a[10];
    klee_make_symbolic(a, sizeof(int)*10, "a");
        if(i == 0) {
            p = a;
        } else {
            p[0] = 1;
        }
    }
    return 0;
}
