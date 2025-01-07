#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        int x = 0, y = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];

            if (s[i] == 'U')
            {
                x = x;
                y = y + 1;
            }
            else if (s[i] == 'D')
            {
                x = x;
                y = y - 1;
            }
            else if (s[i] == 'L')
            {
                x = x - 1;
                y = y;
            }
            else if (s[i] == 'R')
            {
                x = x + 1;
                y = y;
            }

            if (x == 1 && y == 1)
            {
                flag = 1;
            }
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