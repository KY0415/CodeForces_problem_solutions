#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    char colour[100];

    cin>>n;

    while(n--)
    {
        cin>>colour[n];

        if(colour[n]==colour[n+1])
        {
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}