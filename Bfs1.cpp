/*
                      Robiul Islam Rubel
                      Uttara University
           Depertment of Computer Science & Engineering
*/
#include<bits/stdc++.h>
#define ll long long int
#define read freopen("input.txt","r",stdin);
#define mx 100
#include<queue>
using namespace std;
vector<int>G[mx];
int visited[mx];
int dis[mx];
void bfs(int source)
{
    for(int i=1;i<=mx;i++)
    {
        visited[i]=0;
    }
    queue<int>q;
    q.push(source);
    visited[source]=1;
    dis[source]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }

}
int main()
{
 int node,edge;
 cin>>node>>edge;
 for(int i=1;i<=edge;i++)
 {
    int u,v;
    cin>>u>>v;
    G[u].push_back(v);
    G[v].push_back(u);

 }
 int source;
 cin>>source;
 bfs(source);
 for(int i=1;i<=node;i++)
 {
    cout<<dis[i]<<" ";
 }


    return 0;
}
