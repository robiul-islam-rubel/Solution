#include<bits/stdc++.h>
#define M 100015
using namespace std;
vector<int>graph[M];
bool visited[M];

void dfs(int source)
{
    visited[source]=1;
    for(int i=0;i<graph[source].size();i++)
    {
        int next=graph[source][i];
        if(visited[next]==0)
        {
            dfs(next);
        }
    }
}
int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u;
       graph[i].push_back(i+u);
    }
    dfs(1);

        if(visited[t]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    return 0;
}
