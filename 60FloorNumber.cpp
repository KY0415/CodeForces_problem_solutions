#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int i = 1;
        int r = 0;
        if (n == 1 || n == 2)
        {
            cout << "1" << endl;
        }
        else
        {
            while (r<n)
            {
                r = (i * x) + 2;
                i++;
            }
            cout << i << endl;
        }
    }
    return 0;
}