#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 0;
    int second = 1;

    if (n == 1)
    {
        cout << "0" << endl;
    }

    else
    {
        cout << first << " " << second;

        for (int i = 3; i <= n; i++)
        {
            int result = first + second;
            first = second;
            second = result;
            cout << " " << result;
        }
    }

    return 0;
}