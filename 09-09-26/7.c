//code by Sushmitha Ankireddy
//Date:09-09-26
#include <stdio.h>
#define length 100

// Replaces all occurrences of character x with character y
void replaceChar(char str[], char x, char y) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == x) {
            str[i] = y;
        }
    }
}

int main() {
    char str[length];
    char x, y;

    printf("Enter a word: ");
    // Reads an entire line including spaces, excluding the newline
    scanf("%99[^\n]", str);

    printf("Enter character to replace (x): ");
    scanf(" %c", &x);

    printf("Enter replacement character (y): ");
    scanf(" %c", &y);

    replaceChar(str, x, y);

    printf("Modified result: %s\n", str);

    return 0;
}

