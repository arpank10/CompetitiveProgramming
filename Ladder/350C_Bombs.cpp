#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
bool comp(pair <ll,ll> &a,pair <ll,ll> &b)
{
    return (abs(a.first)+abs(a.second)<abs(b.first)+abs(b.second));
    
}
int main()
{
	ll n;cin>>n;
	std::vector < pair<ll,ll> > v;
	ll c=0;c+=2*n;
	REP(i,n) 
	{
		ll a,b;	cin>>a>>b;
		if(a!=0)
			c+=2;
		if(b!=0)
			c+=2;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),comp);
	printf("%lld\n",c);
	REP(i,n)
	{
		ll a=v[i].first,b=v[i].second;
		if(a<0)     printf("1 %lld L\n",abs(a));
	    else if(a>0)	    printf("1 %lld R\n",abs(a));
	    if(b<0)	    printf("1 %lld D\n",abs(b));
	    else if(b>0)    printf("1 %lld U\n",abs(b));
		printf("2\n");
		if(a<0)     printf("1 %lld R\n",abs(a));
	    else if(a>0)	    printf("1 %lld L\n",abs(a));
	    if(b<0)	    printf("1 %lld U\n",abs(b));
	    else if(b>0)    printf("1 %lld D\n",abs(b));
		printf("3\n");
	}
 return 0;
}