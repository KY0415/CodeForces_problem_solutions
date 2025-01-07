#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, r, d;
        cin >> n;
        d = n / 4;
        r = n % 4;
        if(r >= 2)
        {
            r = 1;
        }
        cout << d + r << endl;
    }

    return 0;
}