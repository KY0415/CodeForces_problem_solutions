#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}