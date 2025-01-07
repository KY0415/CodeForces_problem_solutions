#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}