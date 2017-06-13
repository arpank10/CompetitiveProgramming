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
	ll n,q;
	scanf("%lld %lld",&n,&q);
	ll a[n];
	REP(i,n)
	scanf("%lld",&a[i]);
	ll inc[n];inc[0]=0;
	ll dec[n];dec[n-1]=n-1;
	ll k=0;
	FOR(i,1,n-1)
	{
		if(a[i]>a[i-1])
			k=i;
		inc[i]=k;
	}
	k=n-1;
	FORD(i,n-2,0)
	{
		if(a[i]>a[i+1])
			k=i;
		dec[i]=k;
	}
	while(q--)
	{
		ll l,r;
		scanf("%lld %lld",&l,&r);l--;r--;
		if(inc[r]<=dec[l])
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}