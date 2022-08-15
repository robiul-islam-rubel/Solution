#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod(ll b,ll p,ll m)
{
    ll x;
    if(p==0) return 1; /// base case
    if(p%2) return ((b%m)*mod(b,p-1,m))%m; /// if power is odd decrease power and mul with base.
    else
        x=mod(b,p/2,m); /// if power even mul base*base power divide by 2.
    return ((x%m)*(x%m))%m;
}
int main()
{
    ll a=2,b=3,m=5;
    cout<<mod(a,b,m)<<endl;
    return 0;
}
