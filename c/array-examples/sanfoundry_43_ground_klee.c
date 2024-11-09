extern void abort(void);
#include <assert.h>
#include <klee/klee.h> 

void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);

/*
 * Adapted from http://www.sanfoundry.com/c-programming-examples-arrays/
 * C Program to Increment every Element of the Array by one & Print Incremented Array
 */
#define SIZE 100000
 
void incrementArray(int src[SIZE] , int dst[SIZE])
{
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    for (i = 0; i < SIZE; i++) {
        dst[i] = src[i]+1;     // this alters values in array in main()
    }
}

int main()
{
    int src[SIZE];
    int dst[SIZE];
		
    klee_make_symbolic(src, sizeof(src), "SRC");
    klee_make_symbolic(dst, sizeof(dst), "DST");
		
    for(int i = 0; i < SIZE; i++)
		{
		    src[i] = __VERIFIER_nondet_int();
		}
 
    incrementArray( src , dst );

    int x;
    klee_make_symbolic(&x, sizeof(int), "x");
    for ( x = 0 ; x < SIZE ; x++ ) {
      src[ x ] = dst[ x ]-1;
    }
  return 0;
}
 

