#include <iostream>
using namespace std;
int main()
{
    int n, p, first, cnt1 = 0, cnt2 = 0;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int max = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            cnt1++;
            max = array[i];
        }
        else
        {
            cnt1 = cnt1;
        }
    }

    int min = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
        {
            cnt2++;
            min = array[i];
        }
        else
        {
            cnt2 = cnt2;
        }
    }

    if (n == 1)
    {
        cout << "0";
    }
    else
    {
        cout << cnt1 + cnt2;
    }

    return 0;
}