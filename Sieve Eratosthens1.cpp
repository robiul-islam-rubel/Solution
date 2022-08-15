#include<bits/stdc++.h>
using namespace std;
#define mx 90000001
vector<int>primes;
bool a[mx];
void sieve()
{
    int mxn=90000000;
    a[0]=a[1]=true;
    for(int i=2;i*i<mxn;i++)
    {
        if(!a[i])
        {
            for(int j=i*i;j<=mxn;j+=i)
            {
                a[j]=true;
            }
        }
    }
    for(int i=2;i<=mxn;i++)
    {
        if(!a[i])
        {
            primes.push_back(i);
        }
    }
}
int main()
{
   sieve();
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       cout<<primes[n-1]<<endl;
   }

    return 0;
}
