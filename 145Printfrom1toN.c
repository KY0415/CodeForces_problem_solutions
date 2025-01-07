#include <stdio.h>
int n;
void print_1_to_N(int i, int n)
{
    if (i > n)
    {
        return;
    }

    printf("%d\n", i);
    print_1_to_N(i + 1, n);
}

int main()
{
    scanf("%d", &n);
    print_1_to_N(1, n);
    return 0;
}