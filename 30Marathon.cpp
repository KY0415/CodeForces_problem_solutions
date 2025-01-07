#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;

        if (a < b && a < c && a < d)
        {
            cout << "3" << endl;
        }

        

        else if ((a >= b && a >= c && a < d) || (a >= b && a >= d && a < c) || (a >= c && a >= d && a < b))
        {
            cout << "1" << endl;
        }

        else if ((a >= b && a < c && a < d) || (a >= c && a < b && a < d) || a >= d && a < b && a < c)
        {
            cout << "2" << endl;
        }

        else if (a >= b && a >= c && a >= d)
        {
            cout << "0" << endl;
        }

        
    }

    return 0;
}