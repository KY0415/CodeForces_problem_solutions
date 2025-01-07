#include <stdio.h>
int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int *x = &a;
    int *y = &b;
    int *z = &c;

    if (*x >= *y && *x >= *z)
    {
        if (*y >= *z)
        {
            printf("%d %d", *z, *x);
        }
        else
        {
            printf("%d %d", *y, *x);
        }
    }
    else if (*y >= *x && *y >= *z)
    {
        if (*x >= *z)
        {
            printf("%d %d", *z, *y);
        }
        else
        {
            printf("%d %d", *x, *y);
        }
    }
    else if (*z >= *x && *z >= *y)
    {
        if (*x >= *y)
        {
            printf("%d %d", *y, *z);
        }
        else
        {
            printf("%d %d", *x, *z);
        }
    }

    return 0;
}