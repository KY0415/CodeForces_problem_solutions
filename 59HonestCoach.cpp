#include <iostream>
#include <algorithm>
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
        int array[n];

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int length = sizeof(array) / sizeof(array[0]);
        sort(array, array + length);

        int temp = abs(array[0] - array[1]);
        for (int i = 2; i < n; i++)
        {
            int result = abs(array[i] - array[i - 1]);
            if (result < temp)
            {
                temp = result;
            }
            else
            {
                temp = temp;
            }
        }
        cout << temp << endl;
    }
    return 0;
}