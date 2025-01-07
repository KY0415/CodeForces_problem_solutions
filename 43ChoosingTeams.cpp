#include <iostream>
using namespace std;
int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (5 - array[i] >= k)
        {
            cnt++;
        }
    }
    cout << cnt / 3;

    return 0;
}
