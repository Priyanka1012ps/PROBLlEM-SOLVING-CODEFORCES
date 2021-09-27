#include<bits/stdc++.h>

using namespace std;
int main()
{
   string str,newstr="";
   char c,ch;
   int n,i;
   cin>>str;
   n=str.size();
   for(i=0;i<n;i++)
   {
       c=str[i];
      if(!(c =='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y'||c =='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'))
       {
           ch = tolower(c);
          newstr = newstr + "." + ch;
       }
   }
   cout<<newstr;

}
