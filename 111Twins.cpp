#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int length = sizeof(a) / sizeof(a[0]);

    sort(a, a + length);

    int target = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        target += a[i];
        cnt++;
        if (target > sum / 2)
        {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}