#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="";
    cin>>s;
    int n,i,f=0;
    vector<int> v;
    vector<int> v1;
   
    
    for(i=0;i<s.size();i++)
    {
        v.push_back(abs(s[i]-s[i+1]));
        //cout<<v[i]<<" ";
    
    }
     reverse(s.begin(),s.end());
    s1=s;
    //cout<<s1;
    for(i=0;i<s.size();i++)
    {
        
        v1.push_back(abs(s1[i]-s1[i+1]));
        // cout<<v1[i]<<" ";
        
    }
    
    for(i=0;i<v.size();i++)
    {
       if(v[i]==v1[i])
       {
           f++;
       }
       
    }
    if(f==v.size()-1)
    cout<<"funny";
    else
    cout<<"not funny";
    return 0 ;
}
