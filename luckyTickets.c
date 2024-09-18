#include <stdio.h>

int main(void) {
    int variantsOfSum[28] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int result = 0;

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                variantsOfSum[i + j + k] += 1;
            }
        }
    }

    for (int i = 0; i < 28; ++i) {
        result += (variantsOfSum[i] * variantsOfSum[i]);
    }

    printf("%d", result);
}