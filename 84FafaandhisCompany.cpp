#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if ((n - i) % i == 0)
        {
            cnt++;
        }
        else
        {
            cnt = cnt;
        }
    }

    cout << cnt;

    return 0;
}