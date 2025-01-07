#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int length = strlen(s);
    int flag = 0;
    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}