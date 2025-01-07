#include <stdio.h>
#include <string.h>
int main()
{
    char s1[11];
    char s2[11];

    scanf("%s", s1);
    scanf("%s", s2);

    int length1 = strlen(s1);
    int length2 = strlen(s2);

    char temp1[21];

    strcpy(temp1, s1);
    strcat(temp1, s2);

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%d %d\n", length1, length2);
    printf("%s\n", temp1);
    printf("%s %s", s1, s2);

    return 0;
}