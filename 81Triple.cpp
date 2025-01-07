#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        if (n <= 2)
        {
            cout << "-1" << endl;
        }

        else
        {
            int len = sizeof(array) / sizeof(array[0]);
            sort(array, array + len);

            int cnt = 0;
            int temp = array[0];
            int flag1 = 0;
            int output;
            for (int i = 0; i < n; i++)
            {
                if (temp == array[i])
                {
                    cnt++;
                    temp = temp;
                    if (cnt >= 3)
                    {
                        flag1 = 1;
                        output = array[i];
                    }
                }
                else
                {
                    if (cnt >= 3)
                    {
                        output = array[i - 1];
                        flag1 = 1;
                        temp = array[i];
                        cnt = 1;
                    }
                    else
                    {
                        cnt = 1;
                        temp = array[i];
                    }
                }
            }

            if (flag1 == 1)
            {
                cout << output << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}