#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sum=0,n,f=0;
    cin>>n;
    int a[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[n][i];
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<n;i++)
        {
            sum=sum+a[i][j];
        }
    
    if(sum==0)
    {
        //cout<<"YES";
        f=1;
        
    }
    else
    {
       f=0;
       break;
        //cout<<"NO";
    }
    }
    if(f==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0 ;
    
}
