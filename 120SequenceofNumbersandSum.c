#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a <= 0 || b <= 0)
        {
            break;
        }

        if (a >= b)
        {
            int sum = 0;
            for (int i = b; i <= a; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }

        else
        {
            int sum = 0;
            for (int i = a; i <= b; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }
    }

    return 0;
}