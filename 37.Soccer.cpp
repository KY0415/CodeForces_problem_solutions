#include <iostream>
using namespace std;
int main()
{
    int t;
    int x1, y1, x2, y2;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
 
        if ((x2 > y2 && x1 <= y1) || (y2 > x2 && y1 <= x1))
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