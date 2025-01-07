#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int flag = 0;

        int r;
        int cnt = 0;
        int num = 1;
        int result;

        int start;

        for(int i = pow(10, n - 1); i < pow(10, n); i++)
        {
            if(i % 66 == 0)
            {
                start = i;
                break;
            }
        }


        for (int i = start; i < pow(10, n); i+=66)
        {
            int temp = i;
            if (i % 66 == 0)
            {
                while (temp != 0)
                {
                    r = temp % 10;
                    temp = temp / 10;

                    if (r != 3 && r != 6)
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        flag = 2;
                    }
                }
            }
            if (flag == 2)
            {
                result = i;
                break;
            }
        }

        if (flag == 2)
        {
            cout << result << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}