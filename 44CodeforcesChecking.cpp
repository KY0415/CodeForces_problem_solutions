#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char a;
    while (t--)
    {
        cin >> a;
        if (a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'r' || a == 's')
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