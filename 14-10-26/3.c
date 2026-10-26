#include <stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Addresses of 2x3 array elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("arr[%d][%d] -> Address: %p\n", i, j, &arr[i][j]);
        }
    }
    return 0;
}

