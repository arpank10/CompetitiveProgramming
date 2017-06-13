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
    ll n;cin>>n;
    ll ans=1;
    if(n==1){cout<<1;return 0;}
    if(n==2){cout<<2;return 0;}
    if(n%2==1)
    {
        ans=n*(n-1)*(n-2);
    }
    else
    {
        if(n%3==0)
            ans=(n-1)*(n-2)*(n-3);
        else
            ans=n*(n-1)*(n-3);
    }
    cout<<ans;
    return 0;
}