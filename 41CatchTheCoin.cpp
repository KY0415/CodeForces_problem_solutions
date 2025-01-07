#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if(y >= -1)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
