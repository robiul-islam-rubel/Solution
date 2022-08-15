#include<bits/stdc++.h>
#define mx 1000005
bool prime[mx];
int sieve[mx];
void prime_ki(int n)
{
    for(int i=0;i<=mx;i++)
    {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for(int i=4;i<=mx;i+=2)
    {
        prime[i]=false;
    }
    for(int i=3;i*i<=mx;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=mx;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
using namespace std;
int main()
{
    prime_ki(100000);
    int n,rem,k,z;
    while(cin>>n){

    z=n;
    rem=0;
    while(n>0)
    {
        k=n%10;
        rem=rem*10+k;
        n/=10;
    }
   /// cout<<rem<<endl;
    ///cout<<z<<endl;
    if(prime[z]==true&&prime[rem]==true)
    {
        cout<<z<<" is emirp."<<endl;
    }
    else if(prime[z]==true)
    {
        cout<<z<<" is prime."<<endl;
    }
    else
    {
        cout<<z<<" is not prime."<<endl;
    }

}
    return 0;
}
