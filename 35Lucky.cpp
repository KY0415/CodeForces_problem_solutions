#include <iostream>
#include <string>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum1 = sum1 + a[i];
        }
        for (int i = 3; i < 6; i++)
        {
            sum2 = sum2 + a[i];
        }
        if (sum1 == sum2)
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