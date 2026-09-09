//code by Sushmitha Ankireddy
//Date 09-09-26
#include <stdio.h>
#include <string.h>
#define LENGTH 100

// Checks if the given string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Characters do not match
        }
    }
    return 1; // All characters match
}

int main() {
    char str[LENGTH];

    printf("Input: ");
    // Read the line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove the newline character left by fgets
    str[strcspn(str, "\n")] = 0;

    // Output the result
    if (isPalindrome(str)) {
        printf("Output: Palindrome\n");
    } else {
        printf("Output: Not a Palindrome\n");
    }

    return 0;
}

