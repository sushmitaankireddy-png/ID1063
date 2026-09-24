#include <stdio.h>
#include <math.h>

int firstStable(double a[], int n, double tolerance) {
    for (int i = 0; i < n - 1; i++) {
        if (fabs(a[i + 1] - a[i]) <= tolerance) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        return 0;
    }

    double a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    double tolerance;
    scanf("%lf", &tolerance);

    int index = firstStable(a, n, tolerance);
    printf("%d\n", index);

    return 0;
}

