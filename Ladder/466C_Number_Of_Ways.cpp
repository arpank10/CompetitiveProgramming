#include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
        int main() {
        	ll n;	cin>>n;
        	ll sum=0;
        	ll a[n];ll h[n];
        	for(ll i=0;i<n;i++)
        	{
        		cin>>a[i];sum+=a[i];h[i]=0;
        	}
        	if(sum%3!=0){cout<<0;return 0;}
        	ll k=sum/3;
        	ll c=0;
        	for(ll i=n-1;i>=0;i--)
        	{
        		c+=a[i];
        		if(c==k)
        			h[i]=1;
        	}
        	for(ll i=n-2;i>=0;i--)
        		h[i]+=h[i+1];
        	ll ans=0;c=0;
        	for(ll i=0;i<n-2;i++)
        	{
        		c+=a[i];
        		if(c==k)
        			ans+=h[i+2];
        	}
        	cout<<ans;
            return 0;
    }