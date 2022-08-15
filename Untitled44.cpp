#include<bits/stdc++.h>
 using namespace std;
 #define mx 200
  int arr[mx][mx],v[mx],n;
  bool visited[mx];
 bool bfs(int s)
 {
     queue<int>q;
    while(!q.empty()) q.pop();
     q.push(s);
     int flag,m;
     flag=0;
     while(!q.empty())
     {
         m=q.front();q.pop();
         visited[m]=true;
         v[m]=flag;
         flag=flag^1;
         for(int i=0;i<n;i++)
         {
             if(arr[m][i]==1)
            {
                if(visited[i]==true)
                 {
                     if(v[i]!=flag)
                            return false;
                 }
                 else
                 {
                     q.push(i);
                 }

            }
         }
     }
     return true;
    }


 int main()
 {
     int edge,a,b;
     while(cin>>n&&n)
     {

         cin>>edge;
         memset(arr,0,sizeof(arr));
         memset(visited,false,sizeof(visited));
         memset(v,-1,sizeof(v));
         for(int i=0;i<edge;i++)
         {
             cin>>a>>b;
             arr[a][b]=1;
         }
         if(bfs(0))
         {
              cout<<"BICOLORABLE."<<endl;
         }

       else
       {
           cout<<"NOT BICOLORABLE."<<endl;
       }
    }
    return 0;
 }
