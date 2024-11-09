#include <stdlib.h>
#include <klee/klee.h>
#include <pthread.h>

int glob;
    klee_make_symbolic(&glob, sizeof(int), "glob");
pthread_mutex_t *p, *q;


void *f(void *x){
  pthread_mutex_lock(q);
  glob++; // RACE!
  pthread_mutex_unlock(q);
  return NULL;
}

int main() {

  pthread_t t1, t2;
  int i;
    klee_make_symbolic(&i, sizeof(int), "i");
  pthread_mutex_t *a;

  for (i=0; i < 10; i++){
    a = malloc(sizeof(pthread_mutex_t));
    pthread_mutex_init(a,0);
    if (i==3)
      p = a;
    if (i==7)
      q = a;
  }

  pthread_create(&t1, 0, f, 0);

  pthread_mutex_lock(p);
  glob++; // RACE!
  pthread_mutex_unlock(p);

  return 1;
}
