#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int a;
    int position = -1;
    int flag = 0;
    scanf("%d", &a);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == a)
        {
            flag = 1;
            position = i;
            break;
        }
        else
        {
            flag = flag;
            position = position;
        }
    }

    if (flag == 1)
    {
        printf("%d\n", position);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}