#include <iostream>
#include <cmath>
using namespace std;

bool isInteger(float num)
{
    return floor(num) == num; // or ceil(num) == num
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        double root = sqrt(sum);
        if (floor(root) == root)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}