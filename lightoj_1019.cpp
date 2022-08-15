#include<bits/stdc++.h>
using namespace std;
#define mx 105
#define pb push_back
#define inf 1e18
#define ll long long int
vector<pair<ll,ll> >G[mx];
ll dis[mx];
void dijkstra()
{
    dis[1]=0;
    priority_queue<pair<ll,ll> >p;
    p.push({1,dis[1]});
    while(!p.empty())
    {
        ll u=p.top().first;     /// node
        ll m=p.top().second;  /// cost
        p.pop();
        for(int i=0;i<G[u].size();i++)
        {
            ll v=G[u][i].first;  /// node
            ll w=G[u][i].second; /// weight
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                p.push({v,dis[v]});
            }

        }
    }
}
int main()
{
    int t,k=1,i;
    cin>>t;
    while(t--)
    {
        int node,edge;
        cin>>node>>edge;
        for(int i=1;i<=node;i++)
        {
            dis[i]=inf;
            G[i].clear();
        }
        for(i=1;i<=edge;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            G[u].pb({v,w});
            G[v].pb({u,w});
        }
        dijkstra();
        cout<<"Case "<<k++<<": ";
        if(dis[node]==inf)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            cout<<dis[node]<<endl;
        }
    }
    return 0;
}
