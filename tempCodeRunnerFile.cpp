#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2)
    {
        cout << "1" << endl;
    }

    else
    {
        int f = 0;
        int s = 1;
        int sum = 0;

        for (int i = 3; i <= n; i++)
        {
            sum = f + s;
            f = s;
            s = sum;
        }

        cout << sum << endl;
    }

    return 0;
}