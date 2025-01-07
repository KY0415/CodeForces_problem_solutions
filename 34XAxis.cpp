#include <iostream>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    int a,b,c;
    while(t--)
    {
        cin >> a >> b >> c;
        if(a == b && a == c)
        {
            cout << "0" << endl;
        }
        else if(a >= b && a >=c)
        {
            if(b >= c)
            {
                cout << a - c << endl;
            }
            else
            {
                cout << a - b << endl;
            }
        }
        else if(b >= a && b >= c)
        {
            if(a >= c)
            {
                cout << b - c << endl;
            }
            else
            {
                cout << b - a << endl;
            }
        }
        else if(c >= b && c >=a)
        {
            if(b >= a)
            {
                cout << c - a << endl;
            }
            else
            {
                cout << c - b << endl;
            }
        }
    }
    return 0;
}