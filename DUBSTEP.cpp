#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s,s1="WUB";
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='W' && s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+2;
            cout<<" ";
        }
        else
        {
            cout<<s[i];
        }
    }
}
