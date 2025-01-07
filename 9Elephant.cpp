#include<iostream>
using namespace std;
int main()
{
    int c,r;

    cin>>c;
    r=c/5;
    if(c%5==0)
    {
        cout<<r;
    }
    else
    {
        cout<<r+1;
    }


    return 0;
}