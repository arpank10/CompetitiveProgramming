#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
int main()
{
	ll n;   cin>>n;
	ll a[n],b[n];
	REP(i,n)
	{
		cin>>a[i];b[i]=a[i];
	}	
	sort(b,b+n);
	ll count=0;
	REP(i,n)
	{
		if(a[i]!=b[i])
		{
			count++;
			if(count>2)
				{cout<<"NO";return 0;}
		}
	}
	cout<<"YES";
	return 0;
}