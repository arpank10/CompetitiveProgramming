#include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    
    int main() 
    {
    	ios::sync_with_stdio(false);
    	cin.tie(0);
        int n;cin>>n;
        vector <int> a,b;
        a.push_back(0);b.push_back(0);
        double avg=0,sum=0;
        int f=1,lv=0;
        while(n--)
        {
        	int x;	cin>>x;
        	if(x==1)
        	{
        	int a1,k1;	cin>>a1>>k1;
        	sum=sum+a1*k1;
        	b[a1-1]=b[a1-1]+k1;
        	}
        	else if(x==2)
        	{
        	int a1;cin>>a1;
        	f++;
        	a.push_back(a1);b.push_back(a1);
        	sum=sum+a1;
        	}
        	else if(x==3)
        	{
        	b[f-2]=b[f-2]+b[f-1]-a[f-1];
        	sum=sum-b[f-1];
        	a.pop_back();b.pop_back();f--;
        	}
        avg=sum/f;
        cout<<fixed<<setprecision(6)<<avg<<endl;
        }
        return 0;
    } 