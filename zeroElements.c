#include <stdio.h>

int main(void) {
    int counter = 0;
    int array[10] = {1, 2, 0, 0, 7, 8, 6, 0, 8, 0};
    for (int i = 0; i < 10; ++i) {
        if (array[i] == 0) {
            counter += 1;
        }
    }

    printf("%d\n", counter);
}
