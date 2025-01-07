#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int nop,Fheight,Pheight,cnt=0;

    cin>>nop>>Fheight;
    for(int i=1; i<=nop; i++)
    {
        cin>>Pheight;

        if(Pheight>Fheight)
        {
            cnt++;
        }
        else
        {
            cnt=cnt;
        }
    }

    if(cnt>0)
    {
        cout<<(cnt*2)+(nop-cnt);
    }
    else
    {
        cout<<nop;
    }

    return 0;
}