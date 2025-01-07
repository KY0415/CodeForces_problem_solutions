#include<iostream>
using namespace std;
int main()
{
    int n,a,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            cnt++;
            break;
        }
    }

    if(cnt==1)
    {
        cout<<"HARD";
    }

    else
    {
        cout<<"EASY";
    }
    
    return 0;
}