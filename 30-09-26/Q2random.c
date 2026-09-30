#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Define matrix dimensions (e.g., between 1 and 10)
    int n = rand() % 10 + 1;
    int m = rand() % 10 + 1;

    printf("%d %d\n", n, m);

    // Generate random 0s and 1s for each entry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d%s", rand() % 2, (j == m - 1) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}

