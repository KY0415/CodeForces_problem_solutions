#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        int cnt = n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            if ((a[i] == '1' && a[n - 1 - i] == '0') || (a[i] == '0' && a[n - 1 - i] == '1'))
            {
                cnt = cnt - 2;
            }
            else
            {
                cnt = cnt;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}