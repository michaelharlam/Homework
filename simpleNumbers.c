#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>

int sqrt(int number) {
    for (int i = 0; i < number; ++i) {
        if (((i * i) <= number) and (number < ((i + 1) * (i + 1)))) {
            return i;
        }
    }
}

bool isSimpleNumber(int number) {
    for (int i = 2; i < (sqrt(number) + 1); ++i) {
        if ((number % i) == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int number = 0;
    printf("Enter a number\n");
    scanf("%d", &number);
    if (number < 2) {
        printf("Number must be greater than 2");
        return 1;
    }

    for (int i = 2; i <= number; ++i) {
        if (isSimpleNumber(i) == true) {
            printf("%d\n", i);
        }
    }
}