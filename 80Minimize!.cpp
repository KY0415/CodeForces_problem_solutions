#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int result = b - a;
        int temp;
        for (int i = a; i <= b; i++)
        {
            temp = result;
            result = (i - a) + (b - i);
            if (result <= temp)
            {
                temp = result;
            }
        }

        cout << temp << endl;
    }
    return 0;
}