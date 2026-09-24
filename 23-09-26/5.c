//code by Sushmitha Ankireddy
//date:23-09-26
#include <stdio.h>

int main() {
    int m, n, T;

    printf("Enter number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter threshold value (T): ");
    scanf("%d", &T);

    // Declare 2D array for the image
    int image[m][n];

    //read matrix elements
    printf("Enter the image matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    // Apply thresholding and print the output
    printf("\nThresholded Image:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (image[i][j] >= T) {
                printf("255 ");
            } else {
                printf("0 ");
	    }
        }
        printf("\n");
    }

    return 0;
}

