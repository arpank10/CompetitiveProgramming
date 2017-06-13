 #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    ll a[1000001];
        int main() {
        	string s;
        	cin>>s;
        	ll n=s.length();
        	ll r=n,l=1;
        	for(ll i=0;i<n;i++)
        	{
        		if(s[i]=='l')
                    {a[r--]=i+1;}
                else
        		{
        		   a[l++]=i+1; 
        		}
        	}
        	for(ll i=1;i<=n;i++)
        		printf("%lld\n",a[i]);
            return 0;
    }