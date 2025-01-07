#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    double ab = b * log(a);
    double cd = d * log(c);

    if (ab > cd)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}