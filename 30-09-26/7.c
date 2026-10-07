#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void uniform(char *str, int n)
{
    FILE *fp = fopen(str, "w");

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%lf\n", (double)rand() / RAND_MAX);
    }

    fclose(fp);
}

int main()
{
    int n;
    int a[100];
    double x;

    srand(time(NULL));

    scanf("%d", &n);

    /* Generate random input */
    uniform("input.dat", n);

    FILE *fp = fopen("input.dat", "r");

    /* Create the array from random values */
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%lf", &x);
        a[i] = 1 + (int)(x * 100);
    }

    fclose(fp);

    /* Print generated input */
    printf("Input:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    /* Pointer keeps track of minimum */
    int *min = &a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < *min)
            min = &a[i];
    }

    /* Remove coins from cursed chest */
    *min = 0;

    /* Print updated array */
    printf("Output:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
