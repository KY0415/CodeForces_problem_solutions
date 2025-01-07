#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (a <= c && c <= b && d <= b)
    {
        cout << c << " " << d << endl;
    }
    else if (a >= c && b >= c && b <= d)
    {
        cout << a << " " << b << endl;
    }
    else if (a <= c && c <= b && b <= d)
    {
        if(c <= b)
        {
            cout << c << " " << b << endl;
        }
        else
        {
            cout << b << " " << c << endl;
        }
        
    }
    else if (a >= c && a <= d && b >= d)
    {
        cout << a << " " << d << endl;
    }
    else if (a == b && b == c && c == d)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}