#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, a1, a2, a3, a4;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

    a1 = k * l;
    a2 = a1 / nl ;
    a3 = c * d;
    a4 = p / np;

    if(a2 <= a3 && a2 <= a4)
    {
        cout << a2 / n;
    }
    else if(a3 <= a2 && a3 <= a4)
    {
        cout << a3 / n;
    }
    else if (a4 <= a2 && a4 <= a3)
    {
        cout << a4 / n;
    }

    return 0;
}