#include<iostream>
using namespace std;
int main()
{
    int t,cnt=0;
    char c1,c2,c3;

    cin>>t;
    while(t--)
    {
        cin>>c1>>c2>>c3;

        if(c1=='-' && c2=='-' && c3=='X')
        {
            --cnt;
        }
        else if(c1=='+' && c2=='+' && c3=='X')
        {
            ++cnt;        
        }
        else if(c1=='X' && c2=='+' && c3=='+')
        {
            cnt++;
        }
        else if(c1=='X' && c2=='-' && c3=='-')
        {
            cnt--;
        }
    }

    cout<<cnt;

}