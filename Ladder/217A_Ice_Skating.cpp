#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
vector < pair<ll,ll> > a;
vector <bool> visited; 
list <ll> adj[100001],adj1[100001];
ll n;
void dfs(ll v)
{
	visited[v]=true;
	list<ll>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();it++)
		if(!visited[*it])
		{
			dfs(*it); 
		}
}
ll scc()
{
	ll ans=0;
	REP(i,n)
		if(!visited[i])
			{dfs(i);ans++;}
	return ans;
}

int main() {
	cin>>n;
	REP(i,n)
	{
		visited.push_back(false);
		ll x,y;
		cin>>x>>y;
		a.pb(mp(x,y));
	}
	REP(i,n-1)
	FOR(j,i+1,n-1)
	{
		if((a[i].ft==a[j].ft)||(a[i].sd==a[j].sd))
			{adj[i].pb(j);
			adj[j].pb(i);}
	}
	ll f=scc();
	cout<<f-1;
	return 0;
}