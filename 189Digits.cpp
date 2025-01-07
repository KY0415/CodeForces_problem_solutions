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

        int r = n % 10;

        cout << r;

        n = n / 10;

        while (n != 0)
        {
            r = n % 10;

            cout << " " << r;

            n = n / 10;
        }
        cout << endl;
    }

    return 0;
}