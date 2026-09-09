//code by Sushmitha Ankireddy
//Date:09-09-26
#include <stdio.h>
#define length 100

// Function to replace every occurrence of 'x' with 'y' in the given string
void replaceChar(char word[], char x, char y) {
    int i = 0;
    
    while (word[i] != '\0') {
        if (word[i] == x) {
            word[i] = y; // Swap character x with y
        }
        i++;
    }
}

int main() {
    char word[length];
    char x, y;

    // Prompt user and read the word
    printf("Enter a word: ");
    scanf("%s", word);

    // Note: The space before %c skips any leftover newline characters in the buffer
    printf("Enter the character to replace (x): ");
    scanf(" %c", &x);

    printf("Enter the replacement character (y): ");
    scanf(" %c", &y);

    // Call the function to modify the string
    replaceChar(word, x, y);
    printf("Modified word: %s\n", word);

    return 0;
}

