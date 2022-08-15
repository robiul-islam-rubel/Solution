#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,m,cnt;
        cin>>a>>b>>m;
         cnt=0;
        for(int i=0;i<=m;i++)
        {
            ll d=__gcd(a+i,b+i);


            if(d==1)
            {
                cout<<a+i<<" "<<b+i<<endl;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
