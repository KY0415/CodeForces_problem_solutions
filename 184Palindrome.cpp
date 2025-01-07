#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;

    int num = 0;

    while(n != 0)
    {
        int r = n % 10;

        n = n / 10;

        num = num * 10 + r;
    }

    if(temp == num)
    {
        cout << num << endl << "YES" << endl;
    }
    else
    {
        cout << num << endl << "NO" << endl;
    }

    return 0;
}