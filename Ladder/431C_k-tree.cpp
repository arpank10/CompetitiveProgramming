#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p=1000000007;
ll ans(ll n,ll k)
{
	ll dp[n+1];
	for(ll i=0;i<=n;i++)
		dp[i]=0;
	dp[0]=1;
	for(ll j=1;j<=n;j++)
		for(ll i=1;i<=min(j,k);i++)
			dp[j]=(dp[j]+dp[j-i])%p;
	return dp[n];
}
int main() {
	ios::sync_with_stdio(false);
    	cin.tie(0);
	ll n,k,d;	cin>>n>>k>>d;
	cout<<(ans(n,k)-ans(n,d-1)+p)%p;
	return 0