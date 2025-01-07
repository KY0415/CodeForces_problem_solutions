#include <iostream>
using namespace std;
int main()
{
    int n, k, temp, cnt1 = 0, cnt2 = 0;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            cnt1++;
        }
    }

    temp = arr[k - 1];

    if (cnt1 == n)
    {
        cout << "0";
    }

    else if (temp == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                cnt2++;
            }
        }
        cout << cnt2;
    }

    else
    {
        for (int i = k; i < n; i++)
        {
            if (arr[i] == temp)
            {
                cnt2++;
            }
            else
            {
                cnt2 = cnt2;
            }
        }
        cout << k + cnt2;
    }

    return 0;
}