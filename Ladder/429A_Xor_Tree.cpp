#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
ll n,ans=0;
vector <ll> in,goal;
vector <bool> visited; 
list <ll> adj[100001];
vector <ll> an;
void dfs(ll v,ll o,ll e,bool od,bool ed)
{
    visited[v]=true;
    if(in[v]!=goal[v])
    {
        if(o==1)
        {
            if(od==false)
                {ans++;an.pb(v+1);od=true;}
        }
        else if(e==1)
        {
            if(ed==false)
                {ans++;an.pb(v+1);ed=true;}
        }
    }
    else
    {
        if(o==1&&od==true)
            {ans++;an.pb(v+1);od=false;}
        if(e==1&&ed==true)
            {ans++;an.pb(v+1);ed=false;}
    }
    if(o==1)
    {
        o=0;e=1;
    }
    else if(e==1)
    {
        e=0;o=1;
    }
    list<ll>::iterator it;
    for(it=adj[v].begin();it!=adj[v].end();it++)
        if(!visited[*it])
        {
            dfs(*it,o,e,od,ed); 
        }
}
int main() {
    cin>>n;
    REP(i,n-1)
    {
        ll a,b;
        cin>>a>>b;
        adj[a-1].pb(b-1);
        adj[b-1].pb(a-1);
    }
    REP(i,n)
    {
        visited.pb(false);
        ll x;cin>>x;
        in.pb(x);
    }
    REP(i,n)
    {
        ll x;cin>>x;
        goal.pb(x);
    }
    bool c=false;
    if(in[0]!=goal[0])
        {c=true;ans++;an.pb(1);}
    dfs(0,1,0,c,false);
    cout<<ans<<endl;
    REP(i,an.size())
        cout<<an[i]<<endl;
    return 0;
}