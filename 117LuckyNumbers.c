#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int flagFinal = 0;
    for (int i = a; i <= b; i++)
    {
        int flag = 0;
        int temp = i;
        while (temp != 0)
        {
            if (temp % 10 == 4 || temp % 10 == 7)
            {

                flag = 1;
                temp = temp / 10;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d ", i);
            flagFinal = 1;
        }
    }

    if (flagFinal == 0)
    {
        printf("-1\n");
    }

    return 0;
}