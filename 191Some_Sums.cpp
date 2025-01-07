#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;
    int final_sum = 0;
    int temp;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        temp = i;
        int r;

        while (temp != 0)
        {
            r = temp % 10;
            sum += r;
            temp /= 10;
        }

        if (sum >= a && sum <= b)
        {
            final_sum += i;
        }
    }

    cout << final_sum << endl;

    return 0;
}