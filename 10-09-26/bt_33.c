#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0; // Initial guess x0
    double f_x, df_x;

    // Run the iteration 5 times
    for (int i = 1; i <= 5; i++) {
        f_x = exp(x) - 2.0;   // f(x) = e^x - 2
        df_x = exp(x);        // f'(x) = e^x

        x = x - (f_x / df_x);// Newton-Raphson update

        printf("Iteration %d: x = %.6f\n", i, x);
    }

    printf("\nFinal root value: %.6f\n", x);

    return 0;
}

