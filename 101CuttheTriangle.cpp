#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3;

        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        if (y1 == y2 || y2 == y3 || y3 == y1)
        {
            if (x1 == x2 || x2 == x3 || x3 == x1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}