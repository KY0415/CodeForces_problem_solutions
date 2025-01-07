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
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int min = array[0];
        for (int i = 1; i < n; i++)
        {
            if (array[i] < min)
            {
                min = array[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + array[i] - min;
        }
        cout << sum << endl;
    }
    return 0;
}