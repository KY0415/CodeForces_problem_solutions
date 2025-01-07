#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n, k, a;

    cin >> n >> k >> a;

    long long int r = n * k / a;

    if (n * k / a > 2147483647 && (n * k / a) - r == 0)
    {
        cout << "long long" << endl;
    }
    else if ((n * k / a) - r != 0)
    {
        cout << "double" << endl;
    }

    else if (n * k / a <= 2147483647)
    {
        cout << "int" << endl;
    }

    return 0;
}