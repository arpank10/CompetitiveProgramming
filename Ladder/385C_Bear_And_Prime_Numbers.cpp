#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define MAXN 10000001
ll ct[MAXN]={0};
ll fr[MAXN]={0};
vector<long long >isprime(MAXN , true);
vector<long long >prime;
vector<long long >SPF(MAXN);
void seive(int N)
{
    isprime[0] = isprime[1] = false ;
 for (long long int i=2; i<N ; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
       for (long long int j=0;j < (int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i];j++)
        {
        isprime[i*prime[j]]=false;
        SPF[i*prime[j]] = prime[j] ;
        }
    }
}
int main()
{
	ll n;
	scanf("%lld",&n);
	seive(MAXN);
	REP(i,n)
	{
		ll x;scanf("%lld",&x);
		ct[x]++;
	}
	REP(i,prime.size())
	{
		ll k=prime[i];
		fr[k]=ct[k];
		for(ll i=2;i*k<MAXN;i++)
			fr[k]+=ct[i*k];
	}
	FOR(i,1,MAXN-1)
		fr[i]+=fr[i-1];
	ll q;scanf("%lld",&q);
	while(q--)
	{
		ll a,b;scanf("%lld %lld",&a,&b);
		if(a>=MAXN)
		a=MAXN-1;
		if(b>=MAXN)
		b=MAXN-1;
		printf("%lld\n",fr[b]-fr[a-1]);
	}	
	return 0;
}