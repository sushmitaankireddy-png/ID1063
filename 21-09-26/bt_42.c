//code by Sushmitha Ankireddy
//Date:21-09-26

#include <stdio.h>
#include <math.h>

int main() {
    double tau = 40.0;       // Time constant in seconds
    double percentage = 0.95; // 95% of steady-state output

    double t = -tau * log(1.0 - percentage);

    printf("Calculated time (t): %.2f seconds\n", t);
    printf("Rounded off to nearest integer: %.0f seconds\n", round(t));

    return 0;
}

