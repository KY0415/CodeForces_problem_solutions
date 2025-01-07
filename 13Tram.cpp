#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,a,b,nop=0,temp=0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        nop=nop+b-a;

        if(nop>temp)
        {
            temp=nop;
        }
        else
        {
            temp=temp;
        }       
    }

    cout<<temp;

    return 0;
}