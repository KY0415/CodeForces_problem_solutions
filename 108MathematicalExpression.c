#include <stdio.h>
int main()
{
    int a, b, ans;
    char c, d;
    scanf("%d %c %d %c %d", &a, &c, &b, &d, &ans);
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;

    if (c == '+')
    {
        if (ans == sum)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", sum);
        }
    }

    else if (c == '-')
    {
        if (ans == sub)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", sub);
        }
    }

    else if (c == '*')
    {
        if (ans == mul)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", mul);
        }
    }
    return 0;
}