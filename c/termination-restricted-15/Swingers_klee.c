#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int bob;
    klee_make_symbolic(&bob, sizeof(int), "bob");
    int samantha;
    klee_make_symbolic(&samantha, sizeof(int), "samantha");
    int temp;
    klee_make_symbolic(&temp, sizeof(int), "temp");
    bob = 13;
    samantha = 17;
    
    while (bob + samantha < 100) {
        temp = bob;
        bob = samantha;
        samantha = temp;
    }
    
    return 0;
}