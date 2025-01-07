#include <stdio.h>
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int *x = &a;
    int *y = &b;

    printf("%d", *x + *y);

    return 0;
}