#include <klee/klee.h>
int main(void) {
    int* p;
    if(1) {
        int a[10];
    klee_make_symbolic(a, sizeof(int)*10, "a");
        p = a;
    }
    p[0] = 1;
}
