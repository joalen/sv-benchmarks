#include <klee/klee.h>
#include <pthread.h>

struct {
  int x;
    klee_make_symbolic(&x, sizeof(int), "x");
  int y;
    klee_make_symbolic(&y, sizeof(int), "y");
} data;

void *t_fun(void *arg) {
  data.x++; // RACE!
  return NULL;
}

int main() {
  pthread_t id;
  pthread_create(&id, NULL, t_fun, NULL);
  data.x++; // RACE!
  return 0;
}

