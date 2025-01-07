#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;

    cin >> a >> b;

    int n1 = a;
    int n2 = b;
    int r;

    while (n2 != 0)
    {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    }

    cout << n1 << endl;

    return 0;
}