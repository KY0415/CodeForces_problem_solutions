#include <iostream>
using namespace std;

int main()
{
    int a, b;
    string s;

    cin >> a >> b;
    cin.ignore();

    cin >> s;
    int flag = 0;

    if (s[a] == '-')
    {
        

        for (int i = 0; i < a - 1; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            for (int i = a + 1; i < s.size(); i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
