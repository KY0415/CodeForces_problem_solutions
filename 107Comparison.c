#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    if (a > b)
    {
        if (c == '>')
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (a < b)
    {
        if (c == '<')
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (a == b)
    {
        if (c == '=')
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}