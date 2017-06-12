#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map <ll,ll> m;
vector < pair <ll,ll> > v;
int main()
{
	ll n;	cin>>n;
	ll a[n],ans[n];
	for(ll i=0;i<n;i++)
		{cin>>a[i];m[a[i]]++;}
	map <ll,ll>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	v.push_back(make_pair(it->first,it->second));
	for(ll i=0;i<v.size();i++)
	{
	ll k=i-1;
	while(k>=0&&v[k].first==v[i].first-1)k--;
	if(k==-1)
	ans[i]=v[i].first*v[i].second;
	else
	ans[i]=v[i].first*v[i].second+ans[k];
	if(i!=0)
	ans[i]=max(ans[i],ans[i-1]);
	}
	cout<<ans[v.size()-1];
 return 0;
}