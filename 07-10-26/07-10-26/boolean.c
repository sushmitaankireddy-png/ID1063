// Code by Sushmitha Ankireddy
// Date: 07-10-26

#include <stdio.h>

int main() {
    int a = 8, b = 8;

    // Bitwise AND (&): Evaluates the binary representations bit-by-bit.
    // 8 in binary is  1000
    // 8 in binary is  1000
    // -------------------
    // Result:         1000 (which is decimal 8)
    printf("8 & 8  = %d\n", a & b);

    // Logical AND (&&): Treats values as boolean conditions.
    // Non-zero values are TRUE (1). Zero is FALSE (0).
    // Both 8 (TRUE) and 8 (TRUE) are non-zero, so TRUE && TRUE yields 1.
    printf("8 && 8 = %d\n", a && b);

    return 0;
}

