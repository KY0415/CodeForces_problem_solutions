#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i += k)
    {
        long long int minimum = a[i];

        for (int j = i; j < min(i + k, n); j++)
        {
            minimum = min(minimum, a[j]);
        }
        cout << minimum << " ";
    }

    return 0;
}
