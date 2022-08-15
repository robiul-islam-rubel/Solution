#include<bits/stdc++.h>
#define M 1e9
#define ll long long int
int phi[10000000];

using namespace std;
void totient(ll  n)
{
 vector<int>phi(n+1);


    phi[0]=0;
    phi[1]=1;
    for(int i=2;i<=n;i++)
    {
        phi[i]=i-1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=2*i;j*j<=n;j+=i)
        {
            phi[j]-=phi[i];
        }
    }
}

using namespace std;

int main()
{
   totient(10000000);
    ll n;
    while(cin>>n)
    {
        if(n==0) break;

       cout<<phi[n]<<endl;
    }

return 0;
}
