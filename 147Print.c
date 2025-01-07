#include <stdio.h>
int print(int i, int n)
{
    if (i > n)
    {
        return 0;
    }

    if (i == n)
    {
        printf("%d", i);
    }

    else
    {
        printf("%d ", i);
    }

    return print(i + 1, n);
}
int main()
{
    int a;

    scanf("%d", &a);

    print(1, a);

    return 0;
}