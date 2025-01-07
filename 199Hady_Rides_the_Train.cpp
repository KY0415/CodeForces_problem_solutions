#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;

    cin >> a;

    if ((a / 4) % 2 == 0)
    {
        cout << a / 4 << " " << a % 4 << endl;
    }
    else
    {
        cout << a / 4 << " " << 3 - (a % 4) << endl;
    }

    return 0;
}