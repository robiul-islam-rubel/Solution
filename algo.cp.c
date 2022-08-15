#include<bits/stdc++.h>
#define pb push_back
#define MAX 1000000
#define inf 99999999
using namespace std;
typedef pair<int,int>pii;
int cost[MAX];
vector<pii>G[MAX];
void dijkstra(int source,int node)
{
	for(int i=0;i<=node;i++)
	{
	  cost[i]=inf;
	}
	priority_queue<pii,vector<pii>,greater<pii> >pq;
	cost[source]=0;
	pq.push(pii(0,source));  /// 1st one is cost
	while(!pq.empty())
	{
	  int u=pq.top().second; /// node
	  int c=pq.top().first();  /// node cost
	  pq.pop();
	  if(cost[u]<c)
	  {
	    continue;
	  }
	  for(int i=0;i<G[u].size();i++)
	  {
	    int v=G[u][i].first;   ///node
	    int w=G[u].[i].second;  /// node cost

	    if(cost[v]>cost[u]+w)
	    {
	      cost[v]=cost[u]+w;
	      pq.push(pii(cost[v],v));
	    }
	  }
	}
}
int main()
{
   int node,edge,source;
   cin>>node>>edge;
   for(int i=0;i<edge;i++)
   {
     int x,y,cost;
     cin>>x>>y>>cost;
     G[x].pb(pii(y,cost));
     G[y].pb(pii(x,cost));
   }
   cin>>source;
   dijkstra(source,node);
   for(int i=1;i<=node;i++)
   {
     if(cost[i]==inf)
     {
       cout<<i<<" "<<"Node is unreachible"<<endl;
     }
     else
     {
       cout<<"Cost of "<<i<<" "<<"Node is "<<" "<<cost[i]<<endl;
     }
   }
	return 0;
}
