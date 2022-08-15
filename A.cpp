#include<bits/stdc++.h>
#define ll long long int
#define mx 100000
using namespace std;
bool vis[mx];
int dis[mx];
vector<int>G[mx];
void dfs(int source)
{
    ///memset(vis,0,sizeof(vis));
    vis[source]=1;
    for(int i=0;i<G[source].size();i++)
    {
        int next=G[source][i];
        if(vis[next]==0)
        {
            dfs(next);
        }
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int source;
    dfs(1);
    int c=1;
    for(int i=1;i<=node;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
