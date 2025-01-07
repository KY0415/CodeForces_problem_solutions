#include <stdio.h>
#include <stdlib.h> // for abs() function
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sumP = 0;
    int sumS = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumP += a[i][j];
            }

            if (i + j == n - 1)
            {
                sumS += a[i][j];
            }
        }
    }

    printf("%d\n", abs(sumP - sumS));

    return 0;
}