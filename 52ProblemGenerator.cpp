#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, r;
    while (t--)
    {
        cin >> n >> r;
        char a[n];

        int cA = 0, cB = 0, cC = 0, cD = 0, cE = 0, cF = 0, cG = 0;

        int cntA = 0, cntB = 0, cntC = 0, cntD = 0, cntE = 0, cntF = 0, cntG = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 'A')
            {
                cA++;
            }
            else if (a[i] == 'B')
            {
                cB++;
            }
            else if (a[i] == 'C')
            {
                cC++;
            }
            else if (a[i] == 'D')
            {
                cD++;
            }
            else if (a[i] == 'E')
            {
                cE++;
            }
            else if (a[i] == 'F')
            {
                cF++;
            }
            else if (a[i] == 'G')
            {
                cG++;
            }
        }

        if (cA < r)
        {
            cntA = r - cA;
        }
        if (cB < r)
        {
            cntB = r - cB;
        }
        if (cC < r)
        {
            cntC = r - cC;
        }
        if (cD < r)
        {
            cntD = r - cD;
        }
        if (cE < r)
        {
            cntE = r - cE;
        }
        if (cF < r)
        {
            cntF = r - cF;
        }
        if (cG < r)
        {
            cntG = r - cG;
        }

        cout << cntA + cntB + cntC + cntD + cntE + cntF + cntG << endl;
    }
    return 0;
}