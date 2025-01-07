#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum += a[i];
    }

    printf("%lld\n", llabs(sum)); // this is llabs() function for long long int data type. abs()function is for int data type.

    return 0;
}