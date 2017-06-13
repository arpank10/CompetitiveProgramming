#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define MAXN 100001
bool inc[MAXN]={false};
/*vector<long long >isprime(MAXN , true);
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
}*/
int main()
{
	ll n,k;
	scanf("%lld %lld",&n,&k);
	if(n/2==k){	
	REP(i,n)
	{
		printf("%lld ",i+1);
	}
	return 0;
	}
	if(k<n/2||n<2)
	{
		printf("-1");return 0;
	}
	ll s=n/2-1;
	ll u=k-s;
	printf("%lld %lld ",u,2*u);
	if(u<MAXN)
	inc[u]=true;
	if(2*u<MAXN)
	inc[2*u]=true;
	ll j=1;
	REP(i,n-2)
	{
		while(inc[j]==true)
			j++;
		printf("%lld ",j);
		j++;
	}
	return 0;
}