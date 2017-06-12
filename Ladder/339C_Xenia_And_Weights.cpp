#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int a[11];
vector <ll> b;
bool dfs(int s,int j,int m)
{
if(m==0)
return 1;
int h=0;
for(ll i=1;i<=10;i++)
	{
	if(a[i]==1&&s>=0&&i!=j&&i>s)
		h=dfs(s-i,i,m-1);
	else if(a[i]==1&&s<0&&i!=j&&-i<s)
		h=dfs(s+i,i,m-1);
	if(h==1)
		{b.push_back(i);
		return 1;}
	}
return 0;	
}
int main()
{
	string s;	cin>>s;
	a[0]=0;
	REP(i,10)
	a[i+1]=s[i]-'0';
	int m;
	cin>>m;
	int flag;
	flag=dfs(0,0,m);
	if(flag==1)
	{
		cout<<"YES"<<endl;
		for(ll i=b.size()-1;i>=0;i--)
			cout<<b[i]<<" ";
	}
	else cout<<"NO";
 return 0;
}