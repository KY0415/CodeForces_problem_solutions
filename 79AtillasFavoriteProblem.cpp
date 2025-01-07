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
        char c[n];

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        int value = int(c[0]);
        for (int i = 1; i < n; i++)
        {
            if (value <= int(c[i]))
            {
                value = int(c[i]);
            }
        }

        cout << value - 96 << endl;
    }
    return 0;
}