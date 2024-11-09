#include <klee/klee.h>
void free(void *);

void kfree(void const *p) {
  free((void *)p);
}
