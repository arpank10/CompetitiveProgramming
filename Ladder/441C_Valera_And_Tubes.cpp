#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p=1000000007;
int main() {
	ios::sync_with_stdio(false);
    	cin.tie(0);
	ll n,m,k;	cin>>n>>m>>k;
	ll len[k];
	if(n*m%k==0)
		{for(ll i=0;i<k;i++)
			len[i]=n*m/k;}
	else
		{for(ll i=0;i<k-1;i++)
			len[i]=n*m/k;
		len[k-1]=n*m-(k-1)*len[0];}
		ll a=1,b=1;
		int flag=0;bool c=false;
	for(ll i=0;i<k;i++)
	{
		cout<<len[i]<<" ";
		ll j=0;
		while(j<len[i])
		{
			cout<<a<<" "<<b<<" ";
			if(flag==0&&c==false)b++;
			else if(flag==1&&c==false)b--;
			if(b==0){c=true;flag=0;b++;}
			else if(b==m+1){c=true;flag=1;b--;}
			if(c==true){a++;}
			j++;
			c=false;
		}
		cout<<endl;
	}
	return 0;
}