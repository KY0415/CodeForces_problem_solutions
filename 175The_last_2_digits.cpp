#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    long long int r = (a * b % 100) * (c * d % 100) % 100;

    cout << setw(2) << setfill('0') << r << endl;

    return 0;
}