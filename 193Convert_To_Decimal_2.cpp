#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;

        cin >> n;

        int cnt = 0;

        while (n > 0)
        {
            if (n % 2 == 1)
            {
                cnt++;
            }
            n = n / 2;
        }

        int result = (1 << cnt) - 1;

        cout << result << endl;
    }

    return 0;
}