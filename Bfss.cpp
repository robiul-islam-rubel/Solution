#include<bits/stdc++.h>
#define MX 100
using namespace std;
bool vis[MX];
int dis[MX];
vector<int>graph[MX];
void bfs(int source)
{
	vis[source]=1;
	dis[source]=0;
	queue<int>Q;
	Q.push(source);
	while(!Q.empty())
	{
	  int node=Q.front();
	  Q.pop();
	  for(int i=0;i<graph[node].size();i++)
	  {
	    int next=graph[node][i];
	    if(vis[next]==0)
        {
            vis[next]=1; /// visited kore dilam
	      dis[next]=dis[node]+1; ///distance update kore dilam
	        Q.push(next); /// oi node ta queue te push kre nilam
        }

	  }
	}
}
int main()
{
  int node,edges;
  cin>>node>>edges;
  for(int i=1;i<=edges;i++)
  {
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  int source;

  cin>>source;
  bfs(source);
  cout<<"From node "<<source<<endl;
  for(int i=1;i<=node;i++)
  {

       cout<<"Distance of "<<i<<" is "<<dis[i]<<endl;

  }
	return 0;
}

