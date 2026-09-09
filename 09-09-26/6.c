#include <stdio.h>

// Function to read characters and build the string
void readString(char str[], int n) {
    for (int i = 0; i < n; i++) {
        scanf(" %c", &str[i]); // Space skips spaces/newlines
    }
    str[n] = '\0'; // Add null terminator
}

int main() {
    int n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    char str[n + 1];

    printf("Enter %d characters: ", n);
    readString(str, n);

    printf("Resulting string: %s\n", str);

    return 0;
}

