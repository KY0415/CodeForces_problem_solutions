#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        int temp = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '?')
                {
                    temp = i;
                }
            }
        }

        int cnt = 0;

        for (int j = 0; j < 3; j++)
        {
            if (a[temp][j] == 'A')
            {
                cnt = cnt + 1;
            }
            else if (a[temp][j] == 'B')
            {
                cnt = cnt + 2;
            }
            else if (a[temp][j] == 'C')
            {
                cnt = cnt + 3;
            }
            else if (a[temp][j] == '?')
            {
                cnt = cnt;
            }
        }

        if (cnt == 3)
        {
            cout << 'C' << endl;
        }
        else if (cnt == 5)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
    return 0;
}