extern void abort(void);
#include <klee/klee.h>
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
#define SIZE 1000000
struct S
{
	int n;
    klee_make_symbolic(&n, sizeof(int), "n");
};

struct S s[SIZE];

int main()
{
	int i;
    klee_make_symbolic(&i, sizeof(int), "i");

	for(i = 0; i < SIZE; i++)
	{
		if(i > SIZE / 2)
			break;

		s[i].n = 10;
	}

	for(i = 0; i < SIZE; i++)
	{
		if(i <= SIZE /2 )
			__VERIFIER_assert(s[i].n == 10);
	}

	return 0;
}
