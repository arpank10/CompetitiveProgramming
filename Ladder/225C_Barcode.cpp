#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define MAXN 1000001
ll dp[1010][2];
ll x, y, n, m;
ll b[1010];
ll solve(ll j,ll i){
    if (j>=m){
        return 0;
    }
    if (dp[j][i]!=-1){
        return dp[j][i];
    }
    else{
        ll ar[2],ans=999999999;
        for (ll k=x;k<=y&&j+k<=m;k++){
            ar[0]=b[j+1+k-1]-b[j+1-1];
            ar[1]=n*k-ar[0];
            ans=min(ans,solve(j+k,(i+1)%2)+ar[i]);
        }
        return dp[j][i] = ans;
    }
}
int main()
{
	cin>>n>>m>>x>>y;
	REP(i,m+1)
	b[i]=0;
	memset(dp,-1,sizeof(dp));
	char c;
	REP(i,n)
	{
		REP(j,m)
		{
			cin>>c;
			if(c=='#') 
			    b[j+1]++;
		}
	}
    FOR(i,1,m)
		{
	    b[i]+=b[i-1];
		}
	 cout << min(solve(0, 0), solve(0, 1)) << endl;
	return 0;
}