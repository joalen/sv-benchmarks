#include <klee/klee.h>
int main(void) {
    int* p;
    for (int i = 0; i < 10; i++) {
        int a[10];
    klee_make_symbolic(a, sizeof(int)*10, "a");
        p = a;
        p[0] = 1;
    }
    p[0] = 2;

    return 0;
}
