#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count=0,temp,min=102 ,max=0,maxi,mini;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        
            maxi=i;
        }
         if(arr[i]<=min)
        {
            min=arr[i];
        
            mini=i;
        }
    }
    if(maxi>mini)
    {
        cout<<(maxi-1)+(n-mini)-1;
    }
        else if(mini>max)
        {
        cout<<(maxi-1)+(n-mini);
    }
}
