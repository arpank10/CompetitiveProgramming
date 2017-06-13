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
    ll n,k;
    cin>>n>>k;
    ll a[n],s=0,ma=-1;
    REP(i,n)
        cin>>a[i];
    sort(a,a+n);
    ll j=n-1,i=j-1;
    ll freq=1,max_element=a[n-1],ct=1;
    while(i>=0&&j>=0)
    {
        if(a[j]-a[i]<=k)
        {
            ct++;
            k=k-(a[j]-a[i]);i--;
        }
        else
        {
            j--;
            ct--;
            k=k+ct*(a[j+1]-a[j]);
        }
        if(ct>=freq)
        {
            freq=ct;
            max_element=a[j];
        }
    }
    cout<<freq<<" "<<max_element;
        return 0;
}