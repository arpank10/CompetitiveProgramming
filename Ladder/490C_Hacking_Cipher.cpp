#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;	cin>>s;ll n=s.length();
	string p,q; cin>>p>>q;
	ll a,b;
	a=stoi(p);
	b=stoi(q);
	ll rem[n],rem1[n];rem[0]=(s[0]-'0')%a;
	for(ll i=1;i<n;i++)
	{
	    rem[i]=(rem[i-1]*10+(int)(s[i]-'0'))%a;
	}
	rem1[n-1]=(s[n-1]-'0')%b;ll k=1;
	for(ll i=n-1;i>0;i--)
	{
	    k=(10*k)%b;
	    rem1[i-1]=((int)(s[i-1]-'0')*k+rem1[i])%b;
	}
	for(ll i=0;i<n;i++)
	{
	    if(rem[i]==0&&rem1[i+1]==0&&s[i+1]!='0'){
	    cout<<"YES"<<endl<<s.substr(0,i+1)<<endl<<s.substr(i+1,n-1-i);return 0;}
	}
	cout<<"NO";
 return 0;
}