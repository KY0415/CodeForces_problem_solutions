#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
        {
            even++;
        }
        else if (a[i] > 0)
        {
            if (a[i] % 2 == 0)
            {
                pos++;
                even++;
            }
            else
            {
                pos++;
                odd++;
            }
        }
        else
        {
            if (a[i] % 2 == 0)
            {
                neg++;
                even++;
            }
            else
            {
                neg++;
                odd++;
            }
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}