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
	unsigned char c:3;
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

struct A d = {.b = 3};
int main(void)
{
	struct B *p;
	p = malloc(sizeof(struct B));
	memcpy(p, &d, sizeof(struct B)); //ERROR: sizeof(struct B) > sizeof(struct A)
	if (p->a != 0) {
		free(p);
	}
	if (p->b != 3) {
		free(p);
	}
	if (p->c != 0) {
		free(p);
	}
	if (p->d != 0) {
		free(p);
	}
	if (p->e != 0) {
		free(p);
	}
	if (p->f != 0) {
		free(p);
	}
	if (p->f1 != 0) {
		free(p);
	}
	if (p->f2 != 0) {
		free(p);
	}
	if (p->f3 != 0) {
		free(p);
	}
	if (p->f4 != 0) {
		free(p);
	}
	free(p);
}
