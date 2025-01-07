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

    sort(a, a + n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // cout << endl;


    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == a[i] + 1)
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}