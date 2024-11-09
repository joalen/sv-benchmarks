#include <klee/klee.h>
typedef unsigned int __kernel_size_t;
    klee_make_symbolic(&__kernel_size_t, sizeof(int), "__kernel_size_t");
typedef __kernel_size_t size_t;

extern void *memset(void * , int , size_t ) ;

typedef unsigned int __u32;
    klee_make_symbolic(&__u32, sizeof(int), "__u32");

struct compstat {
   __u32 unc_bytes ;
   __u32 unc_packets ;
   __u32 comp_bytes ;
   __u32 comp_packets ;
   __u32 inc_bytes ;
   __u32 inc_packets ;
   __u32 in_count ;
   __u32 bytes_out ;
   double ratio ;
    klee_make_symbolic(&ratio, sizeof(double), "ratio");
};

struct ppp_comp_stats {
   struct compstat c ;
   struct compstat d ;
};

int main() {
  struct ppp_comp_stats cstats ;
  memset((void *)(& cstats), 10, 81UL);
  return 0;
}
