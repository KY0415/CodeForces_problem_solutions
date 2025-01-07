#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        long long int a, b;
        long long int sum = 0;

        scanf("%lld %lld", &a, &b);
        if (a >= b)
        {
            for (int i = b + 1; i <= a - 1; i++)
            {
                if (i % 2 == 1)
                {
                    sum += i;
                }
            }
            printf("%lld\n", sum);
        }

        else
        {

            for (int i = a + 1; i <= b - 1; i++)
            {
                if (i % 2 == 1)
                {
                    sum += i;
                }
            }
            printf("%lld\n", sum);
        }
    }

    return 0;
}