#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n1 = t % 10;
    int n2 = t/10;

    if(n1 % n2 == 0 || n2 % n1 == 0)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}