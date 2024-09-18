#include <stdio.h>

int main(void) {
    int counter = 0, length = 22;
    char originalLine[23] = "";

    printf("Put the string\n");
    scanf("%22s", originalLine);

    for (int i = 0; i < length; ++i) {
        if (originalLine[i] == '(') {
            counter += 1;
        } else if (originalLine[i] == ')') {
            counter -= 1;
        }
        if (counter < 0) {
            break;
        }
    }

    if (counter == 0) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }
}