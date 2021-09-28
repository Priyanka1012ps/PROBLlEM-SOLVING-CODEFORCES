#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string su,s1; cin>>su>>s1;
	transform(su.begin(), su.end(), su.begin(), ::tolower);
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	 if (su < s1) 
        cout << -1;
     else if (su > s1) 
        cout << 1;
     else if (su == s1) 
        cout << 0;
	
	return 0;
}
