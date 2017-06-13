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
	ll n,k,d;
	cin>>n>>k>>d;
	int flag=1;
	ll ex=1;
	REP(i,d)
	{
	    ex*=k;
	    if(ex>=n)
	    {flag=0;break;}
	}
	if(flag==1)
	{cout<<-1;return 0;}
	ll a[d][n];
	REP(i,d)
	    REP(j,n)
	        a[i][j]=0;
	ll i=1,j=d-1;
	while(i<n)
	{
	    REP(k,d)
	    a[k][i]=a[k][i-1];
	    int flag=0;
	    while(a[j][i-1]+1==k)
	    {
	        a[j][i]=0;j--;
	    }
	    a[j][i]=a[j][i-1]+1;
	    i++;j=d-1;
	}
	REP(i,d)
	{    REP(j,n)
	        cout<<a[i][j]+1<<" ";
	   cout<<endl;
	}
 return 0;
}