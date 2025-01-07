#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sumN = 0;
    int sumP = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            sumN += a[i];
        }
        else
        {
            sumP += a[i];
        }
    }

    cout << sumP - sumN << endl;

    return 0;
}