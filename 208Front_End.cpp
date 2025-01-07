#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n % 2 == 1)
    {
        for (int i = 0, j = n - 1; i < (n / 2) + 1; i++, j--)
        {
            if (i == n / 2)
            {
                cout << a[i];
            }
            else
            {
                cout << a[i] << " " << a[j] << " ";
            }
        }
    }
    else
    {
        for (int i = 0, j = n - 1; i < (n / 2); i++, j--)
        {
            cout << a[i] << " " << a[j] << " ";
        }
    }

    cout << endl;

    return 0;
}