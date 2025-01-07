#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int A1, A2, B2, B1, T;

        if (a >= b)
        {
            A1 = a;
            A2 = b;
        }
        else if (a < b)
        {
            A1 = b;
            A2 = a;
        }

        if (c >= d)
        {
            B1 = c;
            B2 = d;
        }
        else if (c < d)
        {
            B1 = d;
            B2 = c;
        }

        if (A1 >= B1)
        {
            T = B1;
        }
        else
        {
            T = A1;
        }

        if (T < A2 || T < B2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}