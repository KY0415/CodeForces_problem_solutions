#include <iostream>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;

    if(r==b)
    {
        cout<<r<<" "<<"0";
    }
    else if(r<b)
    {
        cout<<r<<" "<<(b-r)/2;
    }
    else
    {
        cout<<b<<" "<<(r-b)/2;
    }
    
    return 0;
}