#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    string num;
    cin >> num;
 
    int cnt = 0;
 
    for (int i = 0; i < n; i++)
    {
        cnt += num[i] - '0';
    }
 
    cout << cnt << endl;
 
    return 0;
}
