#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    int positionMax = 0;
    int positionMin = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            positionMax = i;
        }
        if (a[i] <= min)
        {
            min = a[i];
            positionMin = i;
        }
    }
    int temp = max;
    a[positionMax] = min;
    a[positionMin] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}