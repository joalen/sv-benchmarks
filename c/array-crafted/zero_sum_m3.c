#include <klee/klee.h> 

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "zero_sum_m3.c", 3, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern short __VERIFIER_nondet_short(void);

int main()
{
	short SIZE;
    klee_make_symbolic(&SIZE, sizeof(SIZE), "SIZE");
    klee_assume(SIZE > 1);

	if(SIZE > 1)
	{
		int i;
		short a[SIZE];
		long long sum=0;
		
		klee_make_symbolic(a, sizeof(short)*SIZE, "array_contents");

		for(int i = 0; i < SIZE; i++) 
		{
		  a[i] = __VERIFIER_nondet_short();
		}

		for(i = 0; i < SIZE; i++ )
		{
			sum = sum + a[i];
		}

		for(i = 0; i < SIZE; i++ )
		{
			sum = sum + a[i];
		}

		for(i = 0; i < SIZE; i++ )
		{
			sum = sum + a[i];
		}

		for(i = 0; i < SIZE; i++)
		{
			sum = sum - a[i];
		}

		for(i = 0; i < SIZE; i++)
		{
			sum = sum - a[i];
		}

		for(i = 0; i < SIZE; i++)
		{
			sum = sum - a[i];
		}

		__VERIFIER_assert(sum == 0);
	}
	return 1;
}
