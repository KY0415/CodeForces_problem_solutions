#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int size = s.size();
    int cnt0 = 0;
    int cnt1 = 0;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
            cnt1 = 0;
            if (cnt0 == 7)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            cnt1++;
            cnt0 = 0;
            if (cnt1 == 7)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}