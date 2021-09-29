#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=0;
    cin>>n;
    int a[13]={4,7,44,47,74,77,444,447,474,477,777,747,774};
    for(i=0;i<13;i++)
    {
        if(n%a[i]==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}
