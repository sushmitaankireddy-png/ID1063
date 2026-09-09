//code by Sushmitha Ankireddy
//date:09-09-26
#include <stdio.h>

// Function to find the index of the first occurrence of a character
int findCharIndex(char str[], char ch) {
    // Loop through the string character by character
    for (int i = 0; str[i] != '\0'; i++) {
        // Return the index if a match is found
        if (str[i] == ch) {
            return i;
        }
    }
    // Return -1 if character is not present in the string
    return -1;
}

int main() {
    char str[100];
    char ch;

    // Read input string
    printf("Input: ");
    scanf("%s", str);

    // Read character to search (space before %c ignores trailing newline)
    printf("character: ");
    scanf(" %c", &ch);

    // Find the index using the function
    int result = findCharIndex(str, ch);

    // Print the output
    printf("Output: %d\n", result);

    return 0;
}

