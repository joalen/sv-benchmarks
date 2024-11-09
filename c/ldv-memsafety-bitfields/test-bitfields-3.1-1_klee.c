/* Contributed by Anton Vasilyev. */

#include <stdlib.h>
#include <klee/klee.h>
#include <string.h>

struct A {
	unsigned char a;
    klee_make_symbolic(&a, sizeof(char), "a");
	unsigned char b:2;
	unsigned char c:2;
	unsigned char d:4;
	unsigned char e:4;
	unsigned char pad;
    klee_make_symbolic(&pad, sizeof(char), "pad");
	unsigned int f;
    klee_make_symbolic(&f, sizeof(int), "f");
} __attribute__((packed));

struct B {
	unsigned char a;
	unsigned char b:2;
	unsigned char c:2;
	unsigned char d:4;
	unsigned char e;
    klee_make_symbolic(&e, sizeof(char), "e");
	unsigned char f;
	unsigned char f1;
    klee_make_symbolic(&f1, sizeof(char), "f1");
	unsigned char f2;
    klee_make_symbolic(&f2, sizeof(char), "f2");
	unsigned char f3;
    klee_make_symbolic(&f3, sizeof(char), "f3");
	unsigned char f4;
    klee_make_symbolic(&f4, sizeof(char), "f4");
} __attribute__((packed));

struct B d = {.c = 3, 4, .b = 2};
int main(void)
{
	struct A *p;
	p = malloc(sizeof(struct A));
	memcpy(p, &d, sizeof(struct A));
	if (p->a != 0) {
		free(p);
	}
	if (p->b != 2) {
		free(p);
	}
	if (p->c != 3) {
		free(p);
	}
	if (p->d != 4) {
		free(p);
	}
	if (p->e != 0) {
		free(p);
	}
	if (p->f != 0) {
		free(p);
	}
	free(p);
}
