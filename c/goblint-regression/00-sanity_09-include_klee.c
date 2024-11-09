#include <stdlib.h>
#include <klee/klee.h>
#include <pthread.h>

int glob;
    klee_make_symbolic(&glob, sizeof(int), "glob");
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *t_fun(void *arg) {
  pthread_mutex_lock(&mutex);
  glob++; // RACE!
  pthread_mutex_unlock(&mutex);
  return NULL;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, NULL, t_fun, NULL);
  glob++; // RACE!
  return 0;
}
