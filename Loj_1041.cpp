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
void solve()
 {



 }

int main()
{
   ll n,a,b,c,odd,even,sum,t;
   cin>>t;
   for(int c=1;c<=t;c++)
   {
       cin>>n;
       string s="";
       while(n)
       {
           if(n&1) s+='1';
           else s+='0';
           n/=2;
       }
       ///cout<<"Binary value is : "<<s<<endl;
       s+='0';
       reverse(s.begin(),s.end());
       ///cout<<"After 1st reverse : "<<s<<endl;
       next_permutation(s.begin(),s.end());
       ///cout<<"After permutation : "<<s<<endl;
       reverse(s.begin(),s.end());
       ///cout<<"After reverse : "<<s<<endl;
       ll ans=0,now=1;
       for(ll i=0;i<s.sz;i++)
       {
           if(s[i]=='1') ans+=now;
           now*=2;
       }
       cout<<"Case "<<c<<": "<<ans<<endl;
   }





       return 0;
}
