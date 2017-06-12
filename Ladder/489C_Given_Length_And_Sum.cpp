#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll m,s;
	cin>>m>>s;
	if(m==1&&s==0){cout<<0<<" "<<0;return 0;}
	int max[m],min[m];
	memset(max,0,sizeof(max));
	memset(min,0,sizeof(min));
	ll t=s;
	for(ll i=0;i<m;i++)
	{
		if(t>=9)
			{max[i]=9;t-=9;}
		else
			{max[i]=t;t=0;}
	}
	for(ll i=m-1;i>=0;i--)
	{
		if(s>9){
			min[i]=9;s=s-9;
		}
		else if(s>1){min[i]=s-1;s=s-min[i];break;}
	}
	min[0]+=s;
	s--;
	if(s!=0||t!=0){cout<<-1<<" "<<-1;return 0;}
	for(ll i=0;i<m;i++)
		cout<<min[i];
	cout<<" ";
	for(ll i=0;i<m;i++)
		cout<<max[i];
}