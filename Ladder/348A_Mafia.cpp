#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define MAXN 1000001
int main()
{
	ll n;
	cin>>n;
	ll x,s=0,ma=-1;
	REP(i,n)
	{
		cin>>x;s+=x;
		if(x>ma)
			ma=x;
	}
	ll ans;
	if(s%(n-1)==0)
		ans=s/(n-1);
	else
		ans=s/(n-1)+1;
	cout<<max(ma,ans);
	return 0;
}