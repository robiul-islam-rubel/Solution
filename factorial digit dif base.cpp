#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
#define sqr(a) ((a) * (a))
#define sz(a) int((a).size())
const int INF=1e9;
const int MOD=1e9+7;
const int INF64=1e18;
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  ((a/gcd(a, b)*b)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int digit(int num,int base)
{
    double x=0;
    for(int i=1;i<=num;i++)
    {
        x+=log10(i)/log10(base);
    }
    int res=x+1+1e-19;
    return res;

}
int main()
{
    ll t,n,m,d,k=1;
    cin>>t;
    while(t--)
    {
       cin>>n>>m;
       cout<<"Case "<<k++<<": ";
       cout<<digit(n,m)<<endl;
    }

    return 0;
}
