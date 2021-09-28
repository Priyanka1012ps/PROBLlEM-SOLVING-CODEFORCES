#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
 int n,temp,sum=0,alp=0,cunt=0,i,j;//cunt is used for count
 cin>>n ;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
  sum=sum+a[i];
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 while(sum>=alp)
 {
  alp=alp+a[n-1];
  sum=sum-a[n-1];
  cunt++;
  n--;
 }
 cout<<cunt;
}
