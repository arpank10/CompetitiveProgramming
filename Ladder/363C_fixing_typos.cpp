#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    string s,t;
    cin>>s;t="";
    ll n=s.length();
    ll c=1;
    bool d=false;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]==s[i+1])
    		c++;
    	else if(s[i]!=s[i+1]||i==n-1)
    	{
    		if(c>=2&&d==false)
    		    {t+=s[i];t+=s[i];d=true;}
    		else if(c>=2&&d==true)
    		    {t+=s[i];d=false;}
    		else{t+=s[i];d=false;}
    		c=1;
    	} 
    }
    cout<<t;
	return 0;
}