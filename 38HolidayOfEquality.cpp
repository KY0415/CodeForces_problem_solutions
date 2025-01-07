#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], sum = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= max)
        {
            max = a[i];
        }
        else
        {
            max = max;
        }
        sum = sum + a[i];
    }
    cout << (n * max) - sum;
    
    return 0;
}