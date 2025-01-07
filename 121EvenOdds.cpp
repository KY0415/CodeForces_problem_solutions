#include <iostream>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int cntO = (n + 1) / 2;

    if (k <= cntO)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        cout << 2 * (k - cntO) << endl;
    }

    return 0;
}