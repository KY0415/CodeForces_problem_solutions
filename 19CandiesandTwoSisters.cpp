#include<iostream>
using namespace std;
int main()
{
    int t,n,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        r=n/2;
        if(n%2==0)
        {
            r=r-1;
        }
        else if(n%2!=0)
        {
            r=r;
        }
        cout<<r<<endl;
    }

    return 0;
}