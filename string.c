#include <stdio.h>
#include <stdbool.h>

bool comparison(char string[], char substring[], int lengthSubstring, int i) {
    int counter = 0, iInString = 0;

    for (int j = 0; j < lengthSubstring; ++j) {
        iInString = i + j;
        if (string[iInString] == substring[j]) {
            ++counter;
        }
    }

    if (counter == lengthSubstring) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    int lengthString = 50, lengthSubstring = 5;
    int counter = 0;
    char string[50] = "hdgfiooiydfhiooiyaushiooiyfhgisudiooiyiauhfvaiuiop";
    char substring[5] = "iooiy";

    for (int i = 0; i < (lengthString - lengthSubstring + 1); ++i) {
        if (comparison(string, substring, lengthSubstring, i)) {
            ++counter;
        }
    }

    printf("%d", counter);
}