#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    int temp = 0, temp1 = 0;
    for (int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if((i*i) + j == n)
            {
                if(i + (j*j) == m)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}