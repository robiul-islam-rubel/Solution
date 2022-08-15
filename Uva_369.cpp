#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int dp[101][101];

ll ncr(ll n,ll r)
{

    if(n==r)
    {
        return 1;
    }
     if(r==1)
    {
        return n;
    }
     if(r==0)
     {
         return 1;
     }
     if(dp[n][r]!=-1)
     {
         return dp[n][r];
     }

     else
     {
         dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
             return dp[n][r];

     }

}
void solve()
{
    ll n,r;
    memset(dp,-1,sizeof(dp));
  while(cin>>n>>r)
  {
      if(n==0&&r==0)
      {
          break;
      }
        ncr(n,r);


    cout<<n<<" things taken "<<r<<" at a time is "<<dp[n][r]<<" exactly."<<endl;
  }

}
int main()
{
     ///memset(dp,-1,sizeof(dp));
    solve();
    return 0;
}
