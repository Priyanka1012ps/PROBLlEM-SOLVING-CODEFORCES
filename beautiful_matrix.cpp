#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r,c;
    int arr[6][6];
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
        cin>>arr[i][j];
        }
    }
     for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
        if(arr[i][j]==1)
    {
        r = abs(3-i);
        c=abs(3-j);
        cout<<r+c;
    }
        }
    }
    

}
