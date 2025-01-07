#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m;
    cin >> m;

    while (m--)
    {
        int n;
        cin >> n;

        int t[n];

        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
        }

        int temp = t[0];
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (abs(temp - t[i]) == 5 || abs(temp - t[i]) == 7)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            temp = t[i];
        }

        if (flag == 1)
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