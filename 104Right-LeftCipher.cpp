#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int size = s.size();

    string temp = s;

    if (size % 2 == 0)
    {
        int temp1 = size / 2 - 1;
        int temp2 = size / 2 - 1;

        s[0] = temp[size / 2 - 1];

        for (int i = 1; i < size; i++)
        {
            if (i % 2 == 1)
            {
                temp1 = temp1 + 1;
                s[i] = temp[temp1];
            }
            else if (i % 2 == 0)
            {
                temp2 = temp2 - 1;
                s[i] = temp[temp2];
            }
        }

        cout << s << endl;
    }

    else
    {
        int temp1 = size / 2;
        int temp2 = size / 2;

        s[0] = temp[size / 2];

        for (int i = 1; i < size; i++)
        {
            if (i % 2 == 1)
            {
                temp1 = temp1 + 1;
                s[i] = temp[temp1];
            }
            else if (i % 2 == 0)
            {
                temp2 = temp2 - 1;
                s[i] = temp[temp2];
            }
        }

        cout << s << endl;
    }

    return 0;
}