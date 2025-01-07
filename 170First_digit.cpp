#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;

    cin >> a;
    int r;
    while (a != 0)
    {
        r = a % 10;
        a = a / 10;
    }
    if (r % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}