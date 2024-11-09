#include <klee/klee.h>
#include <pthread.h>

int data[10];
    klee_make_symbolic(data, sizeof(int)*10, "data");

void *t_fun(void *arg) {
  data[4]++; // RACE!
  return NULL;
}

int main() {
  pthread_t id;
  pthread_create(&id, NULL, t_fun, NULL);
  data[4]++; // RACE!
  return 0;
}

