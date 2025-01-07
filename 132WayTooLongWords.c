#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[101];
        fgets(s, sizeof(s), stdin);
        int length = strlen(s);

        if (s[length - 1] == '\n')
        {
            s[length - 1] = '\0';
            length--;
        }

        if (length > 10)
        {
            printf("%c%d%c\n", s[0], length - 2, s[length - 1]);
        }

        else
        {
            printf("%s\n", s);
        }
    }
    return 0;
}