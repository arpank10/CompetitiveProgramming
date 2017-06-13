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
int main()
{
	ll n;
	scanf("%lld",&n);
	vector < pair<ll,ll> > a;
	REP(i,n)
	{
	ll x;cin>>x;
	a.pb(mp(x,i+1));
	}
	vector <ll> t1,t2;
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	if(n%2==0)
	{
		ll k=n/2-1;
		t1.pb(a[0].sd);
		for(ll i=1,j=0;i<n&&j<k;j++)
		{
			if(j%2==0){t2.pb(a[i].sd);i++;t2.pb(a[i].sd);i++;}
			else{t1.pb(a[i].sd);i++;t1.pb(a[i].sd);i++;}
		}
		if(k%2==0)
			t2.pb(a[n-1].sd);
		else
			t1.pb(a[n-1].sd);
	}
	else
	{
		REP(i,n)
		{
			if(i%2==0)
				t1.pb(a[i].sd);
			else
				t2.pb(a[i].sd);
		}
	}
	printf("%lld\n",1LL*t1.size());
	REP(i,t1.size())
	printf("%lld ",t1[i]);
	printf("\n");
	printf("%lld\n",1LL*t2.size());
	REP(i,t2.size())
	printf("%lld ",t2[i]);
	return 0;
}