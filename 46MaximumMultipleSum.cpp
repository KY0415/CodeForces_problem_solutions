#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, temp = 0, max;
        cin >> n;
        int array[100];
        for (int x = 2; x <= n; x++)
        {
            int sum = 0;
            for (int k = 1; k * x <= n; k++)
            {
                sum = sum + (k * x);
            }
            array[x] = sum;
            max = array[2];

            if (array[x] >= max)
            {
                max = array[x];
                temp = x;
            }
            else
            {
                max = max;
                temp = temp;
            }
        }
        cout << temp << endl;
    }
    return 0;
}
