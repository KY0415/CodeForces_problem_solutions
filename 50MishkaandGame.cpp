#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cnt1++;
        }
        else if (a < b)
        {
            cnt2++;
        }
        else
        {
            cnt1 = cnt1;
            cnt2 = cnt2;
        }
    }
    if (cnt1 > cnt2)
    {
        cout << "Mishka" << endl;
    }
    else if (cnt1 < cnt2)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}