#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k=1000000007;
ll n,f,t,mini;
vector <ll> a;
vector <bool> visited; 
list <ll> adj[100001],adj1[100001];
void dfs(ll v)
{
	visited[v]=true;
	list<ll>::iterator it;
	for(it=adj1[v].begin();it!=adj1[v].end();it++)
		if(!visited[*it])
		{
			if(a[*it]<mini){mini=a[*it];t=1;}
			else if(a[*it]==mini) {t++;}
			dfs(*it); 
		}
}
void fill(ll v,stack<ll> &s)
{
	visited[v]=true;
	list<ll>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();it++)
		if(!visited[*it])
			fill(*it,s);
	s.push(v);
}
ll scc()
{
	ll ans=0;
	stack <ll> s;
	for(ll i=0;i<n;i++)
		if(visited[i]==false)
			fill(i,s);
	for(ll i=0;i<n;i++)
	visited[i]=false;
		while(s.empty()==false)
	{
		ll v=s.top();s.pop();
		if(visited[v]==false)
		{
			t=1;mini=a[v];
			dfs(v);
			ans+=mini;
			f=(f*t)%k;
		}
	}
	return ans;
}

int main() {
	cin>>n;
	f=1;
	for(ll i=0;i<n;i++)
		{ll x;cin>>x;a.push_back(x);visited.push_back(false);}
	ll m;	
	cin>>m;
	while(m--)
	{
		ll z,x;
		cin>>z>>x;
		adj[z-1].push_back(x-1);
		adj1[x-1].push_back(z-1);
	}
	ll ans=scc();
	cout<<ans<<" "<<f;
	return 0;
}