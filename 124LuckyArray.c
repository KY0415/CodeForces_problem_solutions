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
    int min = a[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            cnt++;
        }
    }

    if (cnt % 2 == 1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}