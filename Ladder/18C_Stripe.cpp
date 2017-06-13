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
ll a[100005];
int main()
{
	ll n;
	cin>>n;
	ll s=0;
	REP(i,n)
	{
		cin>>a[i];
		s+=a[i];
	}
	if(s%2)
	{
		cout<<0<<endl;return 0;
	}
	ll ps=0;
	ll ans=0;
	REP(i,n-1)
	{
		ps+=a[i];
		if(ps==s/2)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}