#include <klee/klee.h>
int __return_main;
    klee_make_symbolic(&__return_main, sizeof(int), "__return_main");
void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "inv_sqrt_Quake.c.v+cfa-reducer.c", 4, "reach_error"); }
float __VERIFIER_nondet_float();
void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond);
union float_int {
  float f;
    klee_make_symbolic(&f, sizeof(float), "f");
  int i;
    klee_make_symbolic(&i, sizeof(int), "i");
} ;
float InvSqrt(float x);
int main();
float __return_72;
    klee_make_symbolic(&__return_72, sizeof(float), "__return_72");
int __return_87;
    klee_make_symbolic(&__return_87, sizeof(int), "__return_87");
 int main()
 {
 float main__a;
 float main__r;
    klee_make_symbolic(&main__r, sizeof(float), "main__r");
 main__a = __VERIFIER_nondet_float();
 int main____CPAchecker_TMP_0;
    klee_make_symbolic(&main____CPAchecker_TMP_0, sizeof(int), "main____CPAchecker_TMP_0");
 if (main__a >= 0.10000000149011612)
 {
 if (main__a <= 100.0)
 {
 main____CPAchecker_TMP_0 = 1;
 if (main____CPAchecker_TMP_0 != 0)
 {
 {
 float __tmp_1;
    klee_make_symbolic(&__tmp_1, sizeof(float), "__tmp_1");
 __tmp_1 = main__a;
 float InvSqrt__x;
    klee_make_symbolic(&InvSqrt__x, sizeof(float), "InvSqrt__x");
 InvSqrt__x = __tmp_1;
 float InvSqrt__xhalf = 0.5 * InvSqrt__x;
 union float_int InvSqrt__i;
    klee_make_symbolic(&InvSqrt__i, sizeof(int), "InvSqrt__i");
 InvSqrt__i.f = InvSqrt__x;
 InvSqrt__i.i = 1597463007 - ((InvSqrt__i.i) >> 1);
 InvSqrt__x = InvSqrt__i.f;
 InvSqrt__x = InvSqrt__x * (1.5 - ((InvSqrt__xhalf * InvSqrt__x) * InvSqrt__x));
  __return_72 = InvSqrt__x;
 main__r = __return_72;
 int main____CPAchecker_TMP_1;
    klee_make_symbolic(&main____CPAchecker_TMP_1, sizeof(int), "main____CPAchecker_TMP_1");
 if (main__r >= 0.0)
 {
 if (main__r <= 10.0)
 {
 main____CPAchecker_TMP_1 = 1;
 label_78:; 
 {
 int __tmp_2;
    klee_make_symbolic(&__tmp_2, sizeof(int), "__tmp_2");
 __tmp_2 = main____CPAchecker_TMP_1;
 int __VERIFIER_assert__cond;
    klee_make_symbolic(&__VERIFIER_assert__cond, sizeof(int), "__VERIFIER_assert__cond");
 __VERIFIER_assert__cond = __tmp_2;
 if (__VERIFIER_assert__cond == 0)
 {
 {reach_error();}
 return __return_main;
 }
 else 
 {
  __return_87 = 0;
 return __return_87;
 }
 }
 }
 else 
 {
 label_76:; 
 main____CPAchecker_TMP_1 = 0;
 goto label_78;
 }
 }
 else 
 {
 goto label_76;
 }
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
