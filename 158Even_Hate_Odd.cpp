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

        int cntE = 0;
        int cntO = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n % 2 == 1)
        {
            cout << "-1" << endl;
        }

        else
        {

            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    cntE++;
                }
                else
                {
                    cntO++;
                }
            }

            if (cntE == cntO)
            {
                cout << "0" << endl;
            }
            else
            {
                cout << n / 2 - min(cntE, cntO) << endl;
            }
        }
    }

    return 0;
}