#include<iostream>
using namespace std;
int main()
{
    int p,a,b,c,cnt=0;

    cin>>p;

    while(p--)
    {
        cin>>a>>b>>c;

        if(a+b+c >= 2)
        {
            cnt=cnt+1;
        }
        else
        {
            cnt=cnt;
        }
    }

    cout<<cnt;

    return 0;
}