#include<bits/stdc++.h>
#define ll long long int
#define mx 1e6
using namespace std;
struct edge{
   int a;
   int b;
   int w;



};
edge ar[100000];
int par[10001]; /// this is parent array
int find(int a)
{
    if(par[a]==-1)
    {
          return a;   /// par[a]==-1 then it itself parent
    }


    return par[a]=find(par[a]); /// otherwise change the parent
}
void merge(int a,int b)
{
    par[a]=b;  /// if a and b belongs different set then merge this two
}
bool cmp(edge a,edge b)
{
    if(a.w<b.w)
    {
      return true;  /// weight of a less than weight of b then include it
    }



    return false;  /// otherwise discard it
}
int main()
{
    ll n,m,sum,w,a,b;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        par[i]=-1; /// initialize all node are parent itself
    }
    for(int i=0;i<m;i++)
    {
        cin>>ar[i].a>>ar[i].b>>ar[i].w;
    }
    sum=0;
    sort(ar,ar+m,cmp);  /// sort the array with weight
    for(int i=0;i<m;i++)
    {
        a=find(ar[i].a); /// find the parent of a
        b=find(ar[i].b);  /// find the parent of b
        if(a!=b)
        {
            sum+=ar[i].w; /// if parent of a and b is different then include it
            merge(a,b);  /// finally merge this two node
        }
    }
    cout<<sum<<endl;





    return 0;
}
