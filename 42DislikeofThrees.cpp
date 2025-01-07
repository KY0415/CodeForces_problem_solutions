#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    while (n--)
    {
        cin >> k;
        int temp = 0;
        for (int i = 1; i <= k; i++)
        {
            if (temp % 3 == 0)
            {
                temp++;
                if(temp % 10 == 3)
                {
                    temp++;
                }
            }
            else
            {
                temp = temp;
                if(temp % 10 == 3)
                {
                    temp++;
                    if(temp % 3 == 0)
                    {
                        temp++;
                    }
                }
            }
            if (temp > 3 && temp % 10 == 3)
            {
                temp++;
            }
            temp++;
        }
        cout << temp - 1 << endl;
    }

    return 0;
}
