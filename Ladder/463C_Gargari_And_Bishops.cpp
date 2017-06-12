#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
        cin.sync_with_stdio(false);
	int n;cin>>n;
	int a[n][n];
	ll l[2*n-1],r[2*n-1];
	for(ll i=0;i<2*n-1;i++)
	{
	    l[i]=0;r[i]=0;
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				r[i+j]+=a[i][j];
				l[n-i-1+j]+=a[i][j];
			}
	ll h[2];h[0]=-1;h[1]=-1;
	vector < pair <int,int > > p(2);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
	{
	    ll k=r[i+j]+l[n-1-i+j]-a[i][j];
		ll g=(i+j)%2;
		if(k>h[g]){p[g].first=i+1,p[g].second=j+1;h[g]=k;}
	}
	cout<<h[0]+h[1]<<endl;
	cout<<p[0].first<<" "<<p[0].second<<" "<<p[1].first<<" "<<p[1].second;
   	return 0;
}