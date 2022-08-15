/*                  Robiul Islam Rubel
        Depertment of Computer Science & Engineering
                    Uttara University
                   Dhaka,Bangladesh
 */

#include<bits/stdc++.h>
#define ll                long long int
#define ull               unsigned ll
#define ld                long double
#define pb                push_back
#define pf                push_front
#define ppb               pop_back
#define ppf               pop_front
#define sz                size()
#define pi                acos(-1.0)
#define mod               1000000007
#define F                 first
#define S                 second
#define C                 continue
#define min3(a,b,c)       min(a,min(b,c))
#define max3(a,b,c)       max(a,max(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define mem(a,b)          memset(a,b,sizeof(a))
#define all(a)            (a).begin(),(a).end()
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          ((a)*((b)/gcd(a,b)))
#define case(a)           cout<<"Case "<<(a)<<": "
#define point(a)          fixed<<setprecision(a)
#define get(a)            for(auto &x:a) cin>>x
#define print(a)          for(auto x:a) cout<<x<<" "; cout<<endl
#define see(x)            cout<<#x<<" = "<<x<<endl
#define uniq(a)           sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define big(a)            transform((a).begin(),(a).end(),(a).begin(),::toupper)
#define small(a)          transform((a).begin(),(a).end(),(a).begin(),::tolower)
#define ischar(a)         (('a'<=a&&a<='z')('A'<=a&&a<='Z'))
#define isvowel(a)        (a=='a'|a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
#define fast              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define tc        int test; cin>>test; while(test--)
using namespace std;

ull bigmod(ull b,ull p)
{
    if(p==0)
        return 1;
    ull d=bigmod(b,p/2);
    if(p%2)
    {
        return d*d*b;
    }
    else
        return d*d;
}
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
   ll n,a,b,c,odd,even,sum;
   while(cin>>n)
   {
       a=bigmod(2,n-1);
       ///cout<<"Value of a : "<<a<<endl;
       b=bigmod(2,n);
      /// cout<<"Value of b : "<<b<<endl;
       ull k=(b-1)*a;
       ///cout<<"Value of k : "<<k<<endl;
       sum=0;
       if(n==0)
         break;
       for(int i=2;i<=sqrt(k);i++)
       {
           if(k%i==0)
           {
               ///cout<<"Value of i is : "<<i<<endl;
               ///sum+=i;
               if(k/i==i)
               {
                   ///cout<<"Value of n by i is : "<<n/i<<endl;
                   sum+=i;
               }
               else
               {
                   sum+=(i+k/i);
               }
           }
       }
       if(k==sum+1)
       {
           cout<<"Perfect:"<<" "<<k<<"!"<<endl;
       }
       else if(isprime(n)&&k!=sum+1)
       {
           cout<<"Given number is prime. But, NO perfect number is available."<<endl;
       }
       else
       {
           cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
       }
   }





       return 0;
}
