#include<iostream>
using namespace std;
int main()
{
    long long int n,r,cnt=0;

    cin>>n;

    while(n!=0)
    {
        r=n%10;
        n=n/10;

        if(r==4 || r==7)
        {
            cnt++;
        }

    }

    if(cnt==4 || cnt==7)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }


    return 0;
}