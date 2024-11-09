#include <pthread.h>
#include <klee/klee.h>
#include <stdio.h>

int myglobal;
    klee_make_symbolic(&myglobal, sizeof(int), "myglobal");

void *t_fun(void *arg) {
  myglobal=40; // NORACE
  return NULL;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, NULL, t_fun, NULL);
  pthread_join (id, NULL);
  return 0;
}
