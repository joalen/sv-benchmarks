#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int choose;
    klee_make_symbolic(&choose, sizeof(int), "choose");
    int life;
    klee_make_symbolic(&life, sizeof(int), "life");
    int death;
    klee_make_symbolic(&death, sizeof(int), "death");
    int temp;
    klee_make_symbolic(&temp, sizeof(int), "temp");
    choose = 2;
    life = 13;
    death = 17;

    while (life < death) {
        temp = death;
        death = life + 1;
        life = temp;
        
        if (choose < life || choose < death) {
            life = choose;
        }
    }
    
    return 0;
}
