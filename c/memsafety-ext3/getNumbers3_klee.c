#include <klee/klee.h>
int array[10];
    klee_make_symbolic(array, sizeof(int)*10, "array");

// function returns array of numbers
int* getNumbers() {
    for (int i = 0; i < 10; ++i) {
        array[i] = i;
    }

    return array;
}

int main (void) {
    int *numbers = getNumbers();
    numbers[0] = 100;
    return 0;
}
