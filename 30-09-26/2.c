#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m;
    int a[100][100];

    scanf("%d %d", &n, &m);

    /* Random matrix generation */
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 2;
        }
    }

    /* Print the generated test matrix */
    printf("Test Matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /* Minesweeper output */
    printf("\nMinesweeper Output:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                printf("-1 ");
            }
            else
            {
                int count = 0;

                /* Check all 8 neighbouring cells */
                for (int di = -1; di <= 1; di++)
                {
                    for (int dj = -1; dj <= 1; dj++)
                    {
                        if (di == 0 && dj == 0)
                            continue;

                        int ni = i + di;
                        int nj = j + dj;

                        if (ni >= 0 && ni < n &&
                            nj >= 0 && nj < m)
                        {
                            if (a[ni][nj] == 1)
                                count++;
                        }
                    }
                }

                printf("%d ", count);
            }
        }
        printf("\n");
    }

    return 0;
}
