#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    if(n<7){if(n==4)cout<<4;
    		else cout<<-1;
    		return 0;
    		}
    if(n%7==0)
    {
    	for(int i=0;i<n/7;i++)
    		cout<<7;
    	return 0;
    }
    ll s=n/7,f=((n-s*7)/4),flag=0;
    while(s>=0)
    {	
    	f=((n-s*7)/4);
    	if(s*7+f*4==n){flag=1;break;}
    	else s--;
    	}
    	if(flag==1){
    for(int i=0;i<f;i++)
    	cout<<4;
    for(int i=0;i<s;i++)
    	cout<<7;}
    else cout<<-1;
    return 0;
}