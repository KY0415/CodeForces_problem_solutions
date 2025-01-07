#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    int cnt = 0;
    int result = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'x')
        {
            cnt++;
            if (cnt >= 3)
            {
                result = cnt - 2;
            }
        }

        else
        {
            total = total + result;
            cnt = 0;
            result = 0;
        }
    }

    cout << total + result << endl;

    return 0;
}