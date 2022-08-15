#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod =10000007;
ll modulo(ll base,ll power,ll mod)
{
    if(power==0)
    {
        return 1;
    }
    if(power%2)
    {
        return (base%mod)*modulo(base,power-1,mod)%mod;
    }
    else
    {
        ll k=modulo(base,power/2,mod);
        return (k%mod*k%mod)%mod;
    }
}

int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<modulo(a,b,mod)<<endl;
    return 0;
}
