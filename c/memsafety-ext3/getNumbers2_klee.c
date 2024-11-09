#include <klee/klee.h>
int array[10];
    klee_make_symbolic(array, sizeof(int)*10, "array");

// function returns array of numbers
int* getNumbers(void) {
    for (int i = 0; i < 10; ++i) {
       array[i] = i;
    }

    return array;
}

int* getNumbers2(void) {
    int* numbers = getNumbers();
    // numbers2 is local
    int numbers2[10];
    klee_make_symbolic(numbers2, sizeof(int)*10, "numbers2");

    for (int i = 0; i < 10; ++i) {
        numbers2[i] = numbers[i];
    }

    return numbers2;
}

int main(void) {
   int *numbers = getNumbers2();
   numbers[0] = 100;

   return 0;
}
