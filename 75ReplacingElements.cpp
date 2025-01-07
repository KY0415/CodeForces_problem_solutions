#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        int length = sizeof(array) / sizeof(array[0]);
        sort(array, array + length);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] <= d)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }

        else
        {
            if (array[0] + array[1] <= d)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}