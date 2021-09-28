#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    
    int n1,n2;
    
    n1=str1.size();
    n2=str2.length();
    if(n1<n2)
    {
        cout<<"-1";
    }
    
    else if(n2<n1)
    {
        cout<<"1";
    }
    else if(n1==n2)
    {
       cout<<"0"; 
    }
}
