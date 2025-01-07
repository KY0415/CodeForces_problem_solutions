#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();       // This is for ignoring the newline for pressing while getting input. That's why a line gap appears. 
    while (t--)
    {
        string s;
        getline(cin, s);
        int size = s.size();
        int cnt1L = 0;
        int cnt1R = 0;
        int cnt2L = 0;
        int cnt2R = 0;
        int flag1 = 0;
        int flag2 = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '(')
            {
                cnt1L++;
                flag1++;
            }
            else if (s[i] == ')')
            {
                if (flag1 != 0)
                {
                    cnt1R++;
                    flag1--;
                }
                else
                {
                    cnt1R = cnt1R;
                }
            }
            else if (s[i] == '[')
            {
                cnt2L++;
                flag2++;
            }
            else if (s[i] == ']')
            {
                if (flag2 != 0)
                {
                    cnt2R++;
                    flag2--;
                }
                else
                {
                    cnt2R == cnt2R;
                }
            }
        }
        cout << ((cnt1L + cnt1R - abs(cnt1L - cnt1R)) / 2) + ((cnt2L + cnt2R - abs(cnt2L - cnt2R)) / 2) << endl;
    }

    return 0;
}