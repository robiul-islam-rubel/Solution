/*                  Robiul Islam Rubel
        Depertment of Computer Science & Engineering
                    Uttara University
                   Dhaka,Bangladesh
 */

#include<bits/stdc++.h>
#define ll                long long int
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
int main()
{
  ll fact[25];
   fact[0]=1;
   for(int i=1;i<=20;i++)
   {
       fact[i]=fact[i-1]*i;
   }
   ///cout<<"fact of 3 is : "<<fact[3]<<endl;
  ll t,n;
  cin>>t;
   for(int i=1;i<=t;i++)
   {
       cin>>n;
       stack<int>s;
       for(int j=20;j>=0;j--)
       {
           if(fact[j]<=n)
           {
              /// cout<<"Value of fact : "<<fact[3]<<endl;
               n-=fact[j];
               ///cout<<"Value of n is : "<<n<<endl;
               s.push(j);
           }
       }
       ///cout<<"Value of n is : "<<n<<endl;
       case(i);
       if(n==0)
       {
           while(s.size()>1)
           {
               cout<<s.top()<<"!+";
               s.pop();
           }
           cout<<s.top()<<"!"<<endl;
       }
       else
       {
           cout<<"Impossible"<<endl;
       }
   }





       return 0;
}
