#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cntP = 0;
    int cnt = 0;
    int temp = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= temp)
        {
            cnt++;
            if (cnt >= cntP)
            {
                cntP = cnt;
            }
        }
        else
        {
            if (cnt >= cntP)
            {
                cntP = cnt;
            }
            cnt = 1;
        }
        temp = a[i];
    }

    cout << cntP << endl;

    return 0;
}