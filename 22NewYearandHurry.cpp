#include<iostream>
using namespace std;
int main()
{
    int n,k,m,cnt=0,total=0;

    cin>>n>>k;

    m=240-k;

    for(int i=1; i<=n; i++)
    {
        total=total+(i*5);
        if(total<=m)
        {
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}