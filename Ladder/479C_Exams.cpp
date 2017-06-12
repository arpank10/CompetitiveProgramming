#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,max=-1;
	cin>>n;
	pair <ll,ll> p[n];
	for(ll i=0;i<n;i++)
	{
		ll a,b;cin>>a>>b;
		p[i]=make_pair(a,b);
	}
	sort(p,p+n);
	for(ll i=0;i<n;i++)
	{
	    if(max>p[i].second)
	    max=p[i].first;
	    else
	    max=p[i].second;
	}
	cout<<max;
     return 0;
}