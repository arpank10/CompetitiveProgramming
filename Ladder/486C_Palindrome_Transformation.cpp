#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    string s;
    ll n,t;
    cin>>n>>t;
    t--;ll count=0;
    cin>>s;
    ll ans=0;ll l=n+1,r=-1;
    for(int i=0;i<n/2;i++)
    {
    	if(s[i]!=s[n-1-i])
    	{
    		count++;
    		if(i<l)
    			l=i;
    		if(i>r)
    			r=i;
    		
    	}
        int a=min((int)s[i],(int)s[n-1-i]);
        int b=max((int)s[i],(int)s[n-1-i]);
        ans+=min(b-a,a+26-b);
    }
    if(t>=n/2){
    	swap(r,l);
    	r=n-1-r;
    	l=n-1-l;
    }
    if(l>=t&&r>=t)ans+=r-t;
    else if(l<=t&&r<=t)ans+=t-l;
    else ans+=2*min(r-t,t-l)+max(r-t,t-l);
    if(count==0)
    cout<<0;
    else
    cout<<ans;
	return 0;
}