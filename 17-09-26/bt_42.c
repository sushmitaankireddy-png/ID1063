//code by Sushmitha Ankireddy
//date:17-09-26
#include <stdio.h>
#include <math.h>

int main() {
    double tau = 40.0;
    // Time constant in seconds
    double target_fraction = 0.95;
    // 95% of steady-state value

    // Formula: t = -tau * ln(1 - target_fraction)
    double time_exact = -tau * log(1.0 - target_fraction);

    printf("Exact Time:%.2f seconds\n", time_exact);
    printf("Rounded Answer:%.0f seconds\n", round(time_exact));

    return 0;
}

