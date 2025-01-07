#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000001];

    scanf("%s", a);

    int f[26] = {0};

    for (int i = 0; a[i] != '\0'; i++)
    {
        f[a[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            printf("%c : %d\n", i + 'a', f[i]);
        }
    }

    return 0;
}