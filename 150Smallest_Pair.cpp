#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min = a[0] + a[1] + 2 - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] + (j + 1) - (i + 1) <= min)
                {
                    min = a[i] + a[j] + (j + 1) - (i + 1);
                }
            }
        }

        cout << min << endl;
    }

    return 0;
}