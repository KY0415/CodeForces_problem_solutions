#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k, ans;
    while(t--)
    {
        cin >> n >> k;
        if(k == 1 || n == 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << ((k+1)*(n-1))-(n-2) << endl;
 
        }
    }
    return 0;
}