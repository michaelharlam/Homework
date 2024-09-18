#include <stdio.h>

void swap(int *number1, int *number2) {
    *number1 ^= *number2;
    *number2 ^= *number1;
    *number1 ^= *number2;
}

void arraySwap(int array[], int start, int end) {
    while ((end - start) > 0) {
        swap(&array[start], &array[end]);
        ++start;
        --end;
    }
}

int main(void) {
    int m = 3, n = 2;
    int array[5] = {1, 2, 3, 4, 5};

    printf("Before swap:\n\n");
    for (int i = 0; i < 5; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");

    arraySwap(array, 0, m - 1);
    arraySwap(array, m, m + n - 1);
    arraySwap(array, 0, m + n - 1);

    printf("After swap:\n\n");
    for (int i = 0; i < 5; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}