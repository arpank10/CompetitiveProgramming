#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k=1000000007;
int main() {
	int n;cin>>n;int c=0;
	map <int,int> m;
	for(ll i=0;i<n;i++)
	{
		int x;cin>>x;
		if(m[x]==0)c++;
		m[x]++;
	}
	ll ans=0;
	while(c>0)
	{
	    int s=0;
		for(int i=0;i<=100;i++)
		{
			int flag=0;
			while(s<=i&&m[i]>0){m[i]--;s++;flag=1;}
			if(m[i]==0&&flag==1)c--;
		}
		ans++;
	}
	cout<<ans;
	return 0;
}