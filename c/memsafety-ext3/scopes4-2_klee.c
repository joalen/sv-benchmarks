#include <klee/klee.h>
extern int printf ( const char * format, ... );

int *foo2(void)
{
    int arr[1024];
    klee_make_symbolic(arr, sizeof(int)*1024, "arr");
    arr[194] = 13;
    return arr + 1;
}

int *foo(void)
{
    int arr[123];
    klee_make_symbolic(arr, sizeof(int)*123, "arr");
    return foo2();
}

int main(void) {
    int *a = foo();
    printf("%d\n", *a);
    return 0;
}
