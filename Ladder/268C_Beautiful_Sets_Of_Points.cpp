#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m;cin>>n>>m;
	ll k=min(n,m);
	cout<<k+1<<endl;
	ll a=0,b=m;
	for(ll i=0;i<=k;i++)
	{
		cout<<a<<" "<<b<<endl;
		a++;b--;
	}
 return 0;
}