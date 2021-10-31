#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,max=0;
    cin>>a>>b>>c;
    int arr[4];
    arr[0]=a+b*c;
    arr[1]=a*(b+c);
   arr[2]= a*b*c;
    arr[3]=(a+b)*c;
    for(i=0;i<4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
    
}
