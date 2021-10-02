#include <bits/stdc++.h>
using namespace std;


int insert(int arr[],int n,int cap,int x,int pos)
{
    int i,idx;
    if(n==cap)
    {
        return -1;
    }
    idx=pos-1;
    for(i=n-1;i>=idx;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}

int main()
{ 
    int cap,n,i,x,pos,res=0;
    cout<<"enter capacity";
    
   cin>>cap;
  
   cout<<"enter element to insert";
    cin>>x;
   cout<<"enter position";
   cin>>pos;
   
  
   
  int  arr[cap]={3,4,5,6};
   
   res=insert(arr, n, cap,x,pos);
   cout<<"array is";
   for(i=0;i<cap;i++)
   {
       cout<<arr[i];
   }
   
}
