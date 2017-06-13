#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
int main()
{
	int n;
	cin>>n;
	vector < pair<ll,ll> > v;
	REP(i,n)
	{
		ll a,b;
		cin>>a>>b;
		v.pb(mp(a,b));
	}
	sort(v.begin(),v.end());
	ll max=0;
	ll ans=0; 
	REP(i,n)
	{
		if(v[i].second<max)ans++;
		if(v[i].second>max)max=v[i].second;
	}	
	cout<<ans<<endl;
 return 0;
}