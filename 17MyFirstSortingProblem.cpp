#include<iostream>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    int arr[n],a,b;

    for(i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            cnt++;
        }
    }

    if(n==1 && arr[0]==1)
    {
        cout<<"YES";
    }
    else if(n==1 && arr[0]==0)
    {
        cout<<"NO";
    }

    else if(cnt>=2)
    {
        cout<<"NO";
    }
    else if(cnt<1)
    {
        cout<<"NO";
    }
    
    else
    {
        cout<<"YES";
    }

    

    return 0;
}