#include<bits/stdc++.h>
using namespace std;
#define mx 10005
int ar[mx];
int tree[mx*4];
void built(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ar[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    built(left,b,mid);
    built(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)
    {
        return 0;
    }
    if(b>=i&&e<=j)
    {
        return tree[node];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int q1=query(left,b,mid,i,j);
    int q2=query(right,mid+1,e,i,j);
    return q1+q2;
}
int main()
{
    int n,a,b,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    built(1,1,n);
    cin>>k;
    while(k--)
    {
        cin>>a>>b;
        cout<<"Maximum value of this range : "<<query(1,1,n,a,b)<<endl;
    }
    return 0;
}
