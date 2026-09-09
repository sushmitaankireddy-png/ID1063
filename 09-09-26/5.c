//code by Sushmitha Ankireddy
//Date:09-09-26
#include <stdio.h>
#include <string.h>
#define length 100
// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str); // Task 1: Find the length of the string
    
    // Task 2: Check palindrome condition up to the midpoint (len / 2)
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char str[length];

    // Read the input string
    printf("Input:");
    scanf("%s", str);

    // Check condition and print the exact required output
    if (isPalindrome(str)) {
        printf("Output: Palindrome\n");
    } else {
        printf("Output: Not a Palindrome\n");
    }

    return 0;
}

