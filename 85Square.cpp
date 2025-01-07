#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f, g, h;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;

        int r1 = pow(sqrt(pow(a - c, 2) + pow(b - d, 2)), 2);
        int r2 = pow(sqrt(pow(a - e, 2) + pow(b - f, 2)), 2);

        if (sqrt(pow(a - c, 2) + pow(b - d, 2)) <= sqrt(pow(a - e, 2) + pow(b - f, 2)))
        {
            cout << r1 << endl;
        }

        else
        {
            cout << r2 << endl;
        }
    }
    return 0;
}