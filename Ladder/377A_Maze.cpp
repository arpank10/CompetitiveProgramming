#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
ll grid[501][501];bool vis[501][501];
ll n,m,k,s=0;
 
void bfs(ll a,ll b) {
	queue<pair<ll,ll> > q;
	q.push(make_pair(a, b));
	ll ct=0,flag=0;
 	while (!q.empty()) {
		pair<ll,ll> cur = q.front();
		q.pop();
		if(vis[cur.first][cur.second]== false)
		{
		    ct++;
		    if(ct==s-k){
		    vis[cur.first][cur.second] = true;
		    break;}
		}
		vis[cur.first][cur.second] = true;
        ll di[]={-1,0,1,0};
        ll dj[]={0,1,0,-1};
    	for(ll i=0;i<4;i++)
            {
    			ll ci = cur.first + di[i];
				ll cj = cur.second + dj[i];
				if (ci >= 0 && ci <n && cj >= 0 && cj <m && grid[ci][cj] && !vis[ci][cj]) {
				    vis[ci][cj]=true;
					q.push(make_pair(ci, cj));ct++;
		            if(ct==s-k)
		            {flag=1;break;}
				}
			}
		if(flag==1)
		break;
		
	}
}
int main() {
 cin>>n>>m>>k;
 pair <ll,ll> p;
	REP(i,n){
		REP(j,m){
			char mt;cin>>mt;if(mt=='#') grid[i][j]=0;else {grid[i][j]=1;s++;p=mp(i,j);} vis[i][j]=false;
		}
	}
	bfs(p.first,p.second);
	//cout<<s<<" "<<k<<endl;
	REP(i,n){
		REP(j,m){
			if(grid[i][j]==1&&vis[i][j]==false)
				cout<<"X";
			else if(grid[i][j]==1)
				cout<<".";
			else
				cout<<"#";
				}
		cout<<endl;
	}
	/*REP(i,n){
		REP(j,m)
	cout<<vis[i][j]<<" ";
	cout<<endl;}*/
    return 0;
}