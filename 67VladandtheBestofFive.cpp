#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i] == 'A')
            {
                cnt1 ++;
            }
            else
            {
                cnt2 ++;
            }
        }
        if(cnt1 > cnt2)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
    return 0;
}