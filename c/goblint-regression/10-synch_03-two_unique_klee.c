#include <pthread.h>
#include <klee/klee.h>
#include <stdio.h>

int myglobal1;
    klee_make_symbolic(&myglobal1, sizeof(int), "myglobal1");
int myglobal2;
    klee_make_symbolic(&myglobal2, sizeof(int), "myglobal2");

void *f1(void *arg) {
  myglobal1=42; // NORACE
  return NULL;
}

void *f2(void *arg) {
  myglobal2=42; // NORACE
  return NULL;
}

int main(void) {
  pthread_t t1, t2;
  pthread_create(&t1, NULL, f1, NULL);
  pthread_create(&t2, NULL, f2, NULL);
  return 0;
}
