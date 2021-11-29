#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s; int n=s.size();
        if(n<11)
        cout<<s<<endl;
        else
        {
            string s1,s2; s1=s[0];s2=s[n-1];
            n=n-2;
            cout<<s1<<n<<s2<<endl;
            
        }
    }
}
