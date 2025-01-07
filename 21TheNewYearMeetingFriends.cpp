#include<iostream>
using namespace std;
int main()
{
    int n,m,o;

    cin>>n>>m>>o;
    
    if(n>m && n>o)
    {
        if(m>o)
        {
            cout<<n-o;
        }
        else
        {
            cout<<n-m;
        }
    }
    else if(m>n && m>o)
    {
        if(n>o)
        {
            cout<<m-o;
        }
        else
        {
            cout<<m-n;
        }
    }
    else
    {
        if(m>n)
        {
            cout<<o-n;
        }
        else
        {
            cout<<o-m;
        }
    }

    return 0;
}