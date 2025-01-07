#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string r = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E')
        {
            if (s[i + 1] == 'G')
            {
                if (s[i + 2] == 'Y')
                {
                    if (s[i + 3] == 'P')
                    {
                        if (s[i + 4] == 'T')
                        {
                            s.replace(i, 5, " ");
                        }
                    }
                }
            }
        }
    }

    cout << s << endl;

    return 0;
}