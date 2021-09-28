#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,s1,k="hello";
    cin>>s;
  int n,i,j=0,count=0;  
  n=s.size();
  for(i=0;i<n;i++)
  {
      if(s[i]==k[j])
      {
          j++;
          count++;
      }
      if(count==5)
      break;
  }
  if(count==5)
  cout<<"YES";
  else
  cout<<"no";
  
 
}
