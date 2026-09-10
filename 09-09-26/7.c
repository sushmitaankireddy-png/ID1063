//code by Sushmitha Ankireddy
//Date:09-09-26
#include <stdio.h>
#include <stdlib.h>

// Function to allocate dynamic memory for a string
char* createString(int size) {
    char *str = (char *)malloc(size * sizeof(char));
    return str;
}

// Function to replace characters
void replaceChar(char *str, char x, char y) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == x) {
            str[i] = y;
        }
    }
}

int main() {
    int max_length = 100;
    
    // Dynamically allocate memory for string using pointer logic
    char *str = createString(max_length);
    char x, y;

    printf("Enter a sentence: ");
    scanf("%99[^\n]", str);

    printf("Enter character to replace (x): ");
    scanf(" %c", &x);

    printf("Enter replacement character (y): ");
    scanf(" %c", &y);

    replaceChar(str, x, y);

    printf("Modified result: %s\n", str);

    // Free dynamically allocated memory
    free(str);

    return 0;
}

