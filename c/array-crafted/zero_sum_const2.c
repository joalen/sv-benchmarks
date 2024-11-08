#include <klee/klee.h> 

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "zero_sum_const2.c", 3, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern long __VERIFIER_nondet_long(void);
void *malloc(unsigned int size);

const int MAX = 100000;

int main()
{
	long SIZE;
    klee_make_symbolic(&SIZE, sizeof(SIZE), "SIZE");
    klee_assume(SIZE > 1 && SIZE < MAX);

	if(SIZE > 1 && SIZE < MAX)
	{
		int i;
		long *a = malloc(sizeof(long)*SIZE);
		long sum=0;

		klee_make_symbolic(a, sizeof(long)*SIZE, "array_contents");
		
		for(i = 0; i < SIZE; i++ )
		{
			a[i] = 1;
		}

		for(i = 0; i < SIZE; i++ )
		{
			sum = sum + a[i];
		}

		for(i = 0; i < SIZE; i++)
		{
			sum = sum - a[i];
		}

		for(i = 0; i < SIZE; i++ )
		{
			sum = sum + a[i];
		}

		for(i = 0; i < SIZE; i++)
		{
			sum = sum - a[i];
		}
		__VERIFIER_assert(sum == 0);
	}
	return 1;
}
