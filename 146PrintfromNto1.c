#include <stdio.h>

void print_N_to_1(int i, int n)
{
    if (i > n)
    {
        return;
    }

    print_N_to_1(i + 1, n);

    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d ", i);
    }
}

int main()
{
    int a;
    scanf("%d", &a);

    print_N_to_1(1, a);

    return 0;
}