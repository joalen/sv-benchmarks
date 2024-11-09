#include <stddef.h>
#include <stdlib.h>
#include <klee/klee.h>
#include <alloca.h>

#define __unlikely(x) x
#define __likely(x) x


extern int __VERIFIER_nondet_int(void);

size_t strcspn(const char *s, const char *reject)
{
  size_t l=0;
  int i;
    klee_make_symbolic(&i, sizeof(int), "i");

  for (; *s; ++s) {
    for (i=0; reject[i]; ++i)
      if (*s==reject[i]) return l;
    ++l;
  }
  return l;
}


int main(){
  int in_len = __VERIFIER_nondet_int();
  if(in_len < 1){return 1;}
  char* in = alloca(in_len);
  in[in_len-1]=0;
  int out_len = __VERIFIER_nondet_int();
  if(out_len < 1){return 1;}
  char* out = alloca(out_len);
  out[out_len-1]=0;
  return (int) strcspn(in, out);
}
