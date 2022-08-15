#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mx 100001
int arr[mx];
int tree[mx * 3];
ll segment(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return arr[b];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    segment(Left, b, mid);
    segment(Right, mid + 1, e);
    return tree[node] = min(tree[Left] , tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX ;  
    if (b >= i && e <= j)
        return tree[node];  
    int Left = node * 2;  
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1,p2);  
}
 
int main()
{
   
    int n,a,b,c,d,k;
    cin>>n>>k;
   
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    segment(1,1,n);
    while(k--)
    {
        cin>>a>>b;
        cout<<query(1,1,n,a,b)<<endl;
    }


    return 0;
}