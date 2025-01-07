#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long temp = 0;

    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;

        long long cnt = 0;

        while (a % 2 == 0)
        {
            cnt++;
            a = a / 2;
        }

        if (cnt >= temp)
        {
            temp = cnt;
        }
    }

    cout << temp << endl;

    return 0;
}