 #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
        int main() {
        	ll n;
    		cin>>n;
    		ll a[n];
     		for(ll i=0;i<n;i++)
     		cin>>a[i];
     		if(n==1){cout<<-1;return 0;}
			sort(a,a+n);
			if(a[n-1]==a[0]){cout<<1<<endl<<a[0];return 0;}
  			int flag=0;
  			int k=a[1]-a[0];
  			if(n==2)flag=2;
  			for(int i=2;i<n;i++)
  			{
  				if(a[i]-a[i-1]!=k)
  					{flag=1;if(a[i]-a[i-1]<k)k=a[i]-a[i-1];}
  			}
  			//cout<<k<<endl;
  			if(flag==0)
  			{
  				cout<<2<<endl;
  				cout<<a[0]-k<<" "<<a[n-1]+k;
  			}
  			else if(flag==1)
  			{
  				int f=0,h=0,j,i;
  				for(i=1;i<n;i++)
  				{
  					if(a[i]-a[i-1]!=k){f++;if(a[i]-a[i-1]==2*k){h=1;j=i;}}
  				}
  				//cout<<f<<endl;
  				if(k==0&&f!=0){cout<<0;return 0;}
  				if(f==1&&h==1)
  				{
  					cout<<1<<endl<<(a[j]+a[j-1])/2;
  				}
  				else if(f==0)
  				{
  					cout<<2<<endl<<a[0]-k<<" "<<a[n-1]+k;
  				}
  				else
  				{
  					cout<<0;
  				}
  			}
  			else
  			{
  				if((a[1]+a[0])%2==0)
  					{cout<<3<<endl<<2*a[0]-a[1]<<" "<<(a[1]+a[0])/2<<" "<<2*a[1]-a[0];}
  				else
  				{
  					cout<<2<<endl<<2*a[0]-a[1]<<" "<<2*a[1]-a[0];
  				}
  			}
          return 0;
    }