#include <stdio.h>
int main()
{
    while (1)
    {
        int c;
        scanf("%d", &c);
        if (c == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}