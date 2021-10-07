#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,min=102 ,max=0,maxi,mini,a;
    cin>>n;
    //int arr[n];
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a>max)
        {
            max=a;
        
            maxi=i;
        }
         if(a<=min)
        {
            min=a;
        
            mini=i;
        }
    }
    if(maxi>mini)
    {
        cout<<(maxi-1)+(n-mini)-1;
    }
        else 
        {
        cout<<(maxi-1)+(n-mini);
    }
    return 0;
}
