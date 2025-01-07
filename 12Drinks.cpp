#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,input,sum=0,cnt=0;
    double average;

    cin>>n;

    while(n--)
    {
        cin>>input;
        cnt++;

        sum=sum+input;
    }

    average=sum/cnt;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(12);

    cout<<average;


    return 0;
}