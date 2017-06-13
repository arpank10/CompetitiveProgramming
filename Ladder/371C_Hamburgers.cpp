#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
ll c[3]={0},p[3]={0},n[3]={0};
ll r;
ll f(ll x)
{
	ll ans=0;
REP(i,3)
	ans+=max(1LL*0,c[i]*x-n[i])*p[i];
return ans;
}
ll bs(ll low,ll high)
{
	if(high>=low)
	{
		ll mid=(high+low)/2;
		 if (f(mid)>r && (mid==low||f(mid-1)<=r))
            return mid-1;
        if (f(mid)<=r)
            return bs((mid + 1), high);
        else
            return bs(low, (mid -1));
    }
    return -1;
}
ll findans()
{
	ll i=1;
	while(f(i)<=r)
		i*=2;
	return bs(i/2,i);
}

int main()
{
	string S;	cin>>S;
	REP(i,S.length())
	{
		if(S[i]=='B')	c[0]++;
		else if(S[i]=='S')	c[1]++;
		else if(S[i]=='C')	c[2]++;
	}
	REP(i,3)
	    cin>>n[i];
	REP(i,3)
	    cin>>p[i];
	cin>>r;
	cout<<findans();	
	return 0;
}