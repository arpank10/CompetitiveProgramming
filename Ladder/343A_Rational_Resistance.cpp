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
ll ans=0;
ll gcd(ll a,ll b)
{
    if(a==0)
    return a;
    ans+=b/a;
    return gcd(b%a,a);
}
int main()
{
    ll a,b;cin>>a>>b;
    ll k=gcd(min(a,b),max(a,b));
    cout<<ans;
    return 0;
}