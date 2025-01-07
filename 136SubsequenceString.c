#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    char t[] = "hello";

    int t_len = strlen(t);

    int i = 0;
    int j = 0;

    while (a[i] != '\0' && j < t_len)
    {
        if (a[i] == t[j])
        {
            j++;
        }
        i++;
    }

    if (j == t_len)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}