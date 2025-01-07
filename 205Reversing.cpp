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

    int temp[101];

    for (int i = 0; i < n; i++)
    {
        temp[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i - 1, k = 0; j >= 0; j--, k++)
            {
                temp[k] = a[j];
            }

            for (int j = 0; j < n; j++)
            {
                a[j] = temp[j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    cout << endl;

    return 0;
}