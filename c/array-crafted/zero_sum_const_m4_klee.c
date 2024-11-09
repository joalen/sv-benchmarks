#include <klee/klee.h> 

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "zero_sum_const_m4.c", 3, "reach_error"); }
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
void *malloc(unsigned int size);

const int MAX = 100000;

int main()
{
    // Make SIZE symbolic first
    long SIZE;
    klee_make_symbolic(&SIZE, sizeof(long), "SIZE");
    klee_make_symbolic(&SIZE, sizeof(SIZE), "SIZE");
    
    // Add constraints
    klee_assume(SIZE > 1 && SIZE < MAX);
    
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    long *a = malloc(sizeof(long)*SIZE);
    
    // Make array contents symbolic
    klee_make_symbolic(a, sizeof(long)*SIZE, "array_contents");
    
    long long sum = 0;

    // Optional: make value symbolic instead of concrete 1
    long value;
    klee_make_symbolic(&value, sizeof(long), "value");
    klee_make_symbolic(&value, sizeof(value), "value");
    
    for(i = 0; i < SIZE; i++ )
    {
        a[i] = value;
    }

    // Four additions
    for(i = 0; i < SIZE; i++ )
        sum = sum + a[i];
    for(i = 0; i < SIZE; i++ )
        sum = sum + a[i];
    for(i = 0; i < SIZE; i++ )
        sum = sum + a[i];
    for(i = 0; i < SIZE; i++ )
        sum = sum + a[i];

    // Four subtractions
    for(i = 0; i < SIZE; i++)
        sum = sum - a[i];
    for(i = 0; i < SIZE; i++)
        sum = sum - a[i];
    for(i = 0; i < SIZE; i++)
        sum = sum - a[i];
    for(i = 0; i < SIZE; i++)
        sum = sum - a[i];

    __VERIFIER_assert(sum == 0);
    return 1;
}