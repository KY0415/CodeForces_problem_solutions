#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b;

        cin >> a >> b;

        if (a > b)
        {
            swap(a, b);
        }

        long long sum = ((b * (b + 1)) / 2) - ((a * (a - 1)) / 2);

        cout << sum << endl;
    }

    return 0;
}