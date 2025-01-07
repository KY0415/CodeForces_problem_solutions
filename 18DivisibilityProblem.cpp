#include<iostream>
using namespace std;
int main()
{
    int t,a,b,r,cnt,temp=0;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;

        cnt=0;
        r=a%b;
        temp=a/b;

        if(r==0)
        {
            cnt=cnt;
        }
        else if(r!=0)
        {
            if(a>b)
            {
                cnt=(b*(temp+1))-a;
            }
            else
            {
                cnt=b-a;
            }
        }

        cout<<cnt<<endl;

    }

    return 0;
}