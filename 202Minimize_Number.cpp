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

    int cnt = 0;

    bool even = true;

    while (even)
    {

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
                even = true;
            }
            else
            {
                even = false;
                break;
            }
        }

        if (!even)
        {
            break;
        }

        cnt++;
    }

    cout << cnt << endl;

    return 0;
}