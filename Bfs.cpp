#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>adj[205];
int visited[210];
void bfs(int s,int n)
{
	for(int i=0;i<n;i++)
	{
	   visited[i]=0;
	}
	queue<int>Q;
	Q.push(s);
	visited[s]=1;
	while(!Q.empty())
	{
	  int u=Q.front();
	  Q.pop();
	  for(int i=0;i<adj[u].size();i++)
	  {
	    if(visited[adj[u][i]]==0)
	    {
	      int v=adj[u][i];
	      visited[v]=1;
	      Q.push(v);
	    }
	  }
	}
}




int main()
{
	     int edge;
             while(cin>>edge)
             {
                 if(edge==0)
                 {
                     break;
                 }
                    int node;
                cin>>node;
                int n1,n2;
                for(int i=0;i<node;i++)
                {
                    cin>>n1>>n2;
                    adj[n1].push_back(n2);
                    adj[n2].push_back(n1);
                }
                bfs(0,node);
                int c=0;
                for(int i=1;i<=node;i++)
                {
                    if(visited[i]==1)
                    {
                        c++;
                    }
                }

                if(c==node)
                {
                    cout<<"BICOLORABLE."<<endl;
                }
                else
                {
                    cout<<"NOT BICOLORABLE."<<endl;
                }

             }


	}
