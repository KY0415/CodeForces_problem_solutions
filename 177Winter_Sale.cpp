#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double x, p;
    cin >> x >> p;

    long double r = (p * 100) / (100 - x);

    cout << fixed << setprecision(2) << r << endl;

    return 0;
}