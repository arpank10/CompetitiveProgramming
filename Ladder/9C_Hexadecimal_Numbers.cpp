#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    if(n==1)
    	{cout<<1;return 0;}
    vector <ll> a;
    for(int i=1;i<=1023;i++)
    {
    	ll k=i;
    	string s="";
    	while(k>0)
    	{
    		s=(char)(k%2+48)+s;
    		k/=2;
    	}
    	int j=atol(s.c_str());
    	a.push_back(j);
    }
    for(ll i=0;i<n-1;i++)
    {
    	if(a[i]==n){cout<<i+1;return 0;}
    	if(a[i+1]==n){cout<<i+2;return 0;}
    	if(a[i]<n&&a[i+1]>n){cout<<i+1;return 0;}
    }
    return 0;
}