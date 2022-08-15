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
bool isass(int ar[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        if(ar[i]>ar[i+1])
        {
            return false;
        }
    }
    return true;
}
int t=1;
void solve()
 {
   int n,cnt;
   cin>>n;
   int ar[n+1];
   for(int i=1;i<=n;i++)
   {
       cin>>ar[i];
   }
   cnt=0;
   for(int i=1;i<=n;i++)
   {
       if(ar[i]!=i)
       {
           for(int j=i+1;j<=n;j++)
           {
               if(ar[j]==i)
               {
                   swap(ar[i],ar[j]);
                   cnt++;
                   break;

               }
           }


       }
   }
   case(t++);
   cout<<cnt<<endl;


 }

int main()
{
   ll n,a,b,c,odd,even,sum;
   cin>>a;
   while(a--)
   {
       solve();
   }





       return 0;
}
