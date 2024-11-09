#define N 100
#define fun mapsum

extern void abort(void);
#include <assert.h>
#include <klee/klee.h>

void reach_error() { assert(0); }
extern int __VERIFIER_nondet_int();

int mapsum (int x[N])
{
  int i;
    klee_make_symbolic(&i, sizeof(int), "i");
  long long ret;
    klee_make_symbolic(&ret, sizeof(long), "ret");
  ret = 0;
  for (i = 0; i < N; i++) {
    ret = ret+ i + x[i];
  }
  return ret;
}

int main ()
{
  int x[N];
  int temp;
    klee_make_symbolic(&temp, sizeof(int), "temp");
  int ret;
  int ret2;
    klee_make_symbolic(&ret2, sizeof(int), "ret2");
  int ret5;
    klee_make_symbolic(&ret5, sizeof(int), "ret5");


  klee_make_symbolic(&x, sizeof(x), "x");
  klee_make_symbolic(&temp, sizeof(temp), "temp");

  for (int i = 0; i < N; i++) {
    x[i] = __VERIFIER_nondet_int();
  }

  ret = fun(x);

  temp=x[0];x[0] = x[1]; x[1] = temp;
  ret2 = fun(x);
  temp=x[0];
  for(int i =0 ; i<N-1; i++){
     x[i] = x[i+1];
  }
  x[N-1] = temp;
  ret5 = fun(x);

  if(ret != ret2 || ret !=ret5){ 
    {reach_error();}
  }
  return 1;
}
