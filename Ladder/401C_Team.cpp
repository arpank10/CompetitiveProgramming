#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m;	cin>>n>>m;
	if((m<n-1)||(2*(n+1)<m))
		{cout<<-1;return 0;}
	ll k=m-(n+1);
	if(m>n)
	{
	    for(int i=0;i<n+1;i++)
	{	
		if(k>0)
		{cout<<11;k--;}
		else cout<<1;
		if(i<n)
		cout<<0;
	}
	//if(k>0)
	//cout<<11;
	}
	else
	{
		for(ll i=0;i<m;i++)
		{
			cout<<0;cout<<1;
		}
		if(m!=n)
		cout<<0;
	}
     return 0;
	
}