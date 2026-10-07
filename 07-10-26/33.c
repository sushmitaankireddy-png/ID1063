//code by Sushmitha Ankireddy
//date:07:10:26
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int fun(int A[], int n) {
    int swap_count = 0;
    
    for (int i = 0; i <= n - 2; i++) {
        for (int j = 0; j <= n - i - 2; j++) {
            if (A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
                swap_count++;
            }
        }
    }
    
    return swap_count;
}

int main() {
    int n = 30;
    int A[n];

    srand(time(NULL));

    // Generate random integers between 0 and 100
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 101;
    }

    // Print input array
    printf("Input Array A:\n[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", A[i], (i == n - 1) ? "" : ", ");
    }
    printf("]\n\n");

    // Execute fun(A) and store the swap count
    int swaps = fun(A, n);

    // Print output of fun(A)
    printf("Output of fun(A) [Total Swaps]: %d\n\n", swaps);

    // Print modified (sorted) output array
    printf("Output Array A (after fun(A)):\n[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", A[i], (i == n - 1) ? "" : ", ");
    }
    printf("]\n");

    return 0;
}

