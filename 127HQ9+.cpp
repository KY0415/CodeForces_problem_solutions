#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int size = s.size();
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            flag = 0;
            break;
        }
        else if (s[i] == '+')
        {
            i++;
            if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        else
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "NO" << endl;
    }

    return 0;
}