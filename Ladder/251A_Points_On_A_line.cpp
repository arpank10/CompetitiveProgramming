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
    ll n,d;cin>>n>>d;
    ll a[n];
    vector <pair<ll,ll> > v;
    REP(i,n)
    cin>>a[i];
    ll i=0,j=0,ans=0;
    while(i<n-2)
    {
        if(j<n-1){
                if(a[j+1]-a[i]<=d)
                    j++;
                else
                {
                    ll k=j-i;
                    ans+=k*(k-1)/2;
                    //cout<<i<<" "<<j<<endl;
                    i++;
                }
            }
        else
        {
            ll k=j-i;
            //cout<<i<<" "<<j<<endl;
            ans+=k*(k-1)/2;i++;
        }
    }
    cout<<ans;
    return 0;
}