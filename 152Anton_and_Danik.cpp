#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cntA = 0;
    int cntD = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A')
        {
            cntA++;
        }
        else
        {
            cntD++;
        }
    }

    if (cntA == cntD)
    {
        cout << "Friendship" << endl;
    }
    else if (cntA > cntD)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}