#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        int min = array[0];
        int pos = -1;
        for (int i = 1; i < size; i++)
        {
            if (min > array[i])
            {
                min = array[i];
                pos = i;
            }
        }
        if (min != array[0])
        {
            pos = pos;
        }
        else
        {
            pos = 0;
        }
        array[pos] = array[pos] + 1;

        int sum = array[0];
        for (int i = 1; i < size; i++)
        {
            sum = sum * array[i];
        }
        cout << sum << endl;
    }
    return 0;
}