#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k=1000000007;
int main() {
	int n,m;cin>>n>>m;
	ll ans=1;
	set <char> u[m];
	while(n--)
	{
		string s;
		cin>>s;
		for(int i=0;i<m;i++)
		{
			u[i].insert(s[i]);
		}
	}
	for(ll i=0;i<m;i++)
		ans=(ans*u[i].size())%k;
	cout<<ans;
   	return 0;
}