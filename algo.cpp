#include<bits/stdc++.h>
#define ll long long int
using namespace std;
long long int power(ll a,ll n,ll p)
{
    ll res=1;
    while(n)
    {
        if(n%2)
        {
            res=(res%p)*(a%p)%p;
            n--;
        }
        else
        {
            a=(a%p)*(a%p);
            n/=2;
        }
    }
    return res;
}
int main()
{
    int n,res=1;
    cin>>n;

    cout<<power(8,n,10)<<endl;
    return 0;
}
