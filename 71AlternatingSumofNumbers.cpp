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
        int array[n];
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            if (i % 2 == 0)
            {
                sum1 = sum1 + array[i];
            }

            else
            {
                sum2 = sum2 + array[i];
            }
        }
        cout << sum1 - sum2 << endl;
    }
    return 0;
}