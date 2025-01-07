#include<iostream>
using namespace std;
int main()
{
    int n,k,m,i,temp1,cnt=0;

    cin>>n>>k;

    int arr[51];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    if(arr[i]==0)
    {
        cout<<"0";
    }

    else
    {
        for(i=1; i<=k; i++)
        {

            cnt++;
            temp1=arr[i];
        }

        for(i=k+1; i<=n; i++)
        {
            if(arr[i] == temp1)
            {
                cnt=k+1;
            }
            else
            {
                break;
            }
        }
        cout<<cnt; 
    }
 

    return 0;
}