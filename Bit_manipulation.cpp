#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isprime(long long int n)
{
    long long int d=sqrt(n);
    if(n<2)
    {
        return false;
    }
    else
    {
        for(int i=2;i<=d;i++)
        {
            if(n%i==0)
            {
                return false;
                break;
            }
        }
        return true;
    }
}
int main()
{
    ll t,n,m;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int ar[n+1]={0};
        for(int i=1;i<=n;i++)
        {
            cin>>m;
            if(ar[m]==0)
            {
                ar[m]=1;
            }
            else
            {
                ar[m]++;
            }
        }
        sort(ar,ar+n+1,greater<int>());
       /* for(int i=0;i<=n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        */
        cout<<ar[0]<<endl;







    }
    return 0;
}
