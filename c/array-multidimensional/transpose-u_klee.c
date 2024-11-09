#include <klee/klee.h>
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "transpose-u.c", 3, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
int __VERIFIER_nondet_int();
int main()
{

	int i;
    klee_make_symbolic(&i, sizeof(int), "i");
	int k;
    klee_make_symbolic(&k, sizeof(int), "k");
	int j;
    klee_make_symbolic(&j, sizeof(int), "j");
	int n=1000;
        int m=1800;
	int A[n][n];
	int C[n][n];

	for ( i = 0 ; i < n ; i++ ){
          for ( j = 0 ; j < n ; j++ ){
                A[i][j]= __VERIFIER_nondet_int();
          }
    }


	i=0;
	j=0;

	while(i < n){
		  j=0;
           while(j < n){
                C[j][i] = A[i][j];
		  		j=j+1;
          }
	i=i+1;
    }

	for ( i = 0 ; i < n ; i++ ){
          for ( j = 0 ; j < n ; j++ ){
                __VERIFIER_assert(C[j][i] == A[i][j]);
          }
    }
return 0;
}
