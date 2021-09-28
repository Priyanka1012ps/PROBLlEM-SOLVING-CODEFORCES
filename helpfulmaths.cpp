#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s,s1="",s2="";
   char c,c1;
   int i,n;
   cin>>s;
   
   sort(s.begin(),s.end());
  
   for(i=0;i<s.length();i++)
   {
       c=s[i];
       if(c!='+')
       {
          s1=s1+c; 
       }
   }
   sort(s1.begin(),s1.end());
  
   for(i=0;i<s1.length();i++)
   {
       c1=s1[i];
       
       {
          s2=s2+c1+'+'; 
       }
   }
   n=s2.length();
   cout<<s2.substr(0,n-1);
}
