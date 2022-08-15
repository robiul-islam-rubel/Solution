#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool islower(char c)
{
   if(c=='a'||c=='i'||c=='e'||c=='o'||c=='u')
   {
       return true;
   }
   else
   {
       return false;
   }
}
 bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Using concept of prime number
    // can be represented in form of
    // (6*n + 1) or(6*n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more then
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void solve()
{
    ll a,b,c,d,e,f,g,h,odd(0),even(0),cnt(0),x,y,z,sum(0),n,k;

     cin>>a>>b>>x;

      if(a%b==0)
     {
         cout<<"-1"<<endl;
     }
     else
     {
         k=x/a;
         d=((k+1)*a);
         if(d%b==0)
         {
             cout<<d+a<<endl;
         }
         else
         {
             cout<<(d)<<endl;2
         }


    }



}



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


