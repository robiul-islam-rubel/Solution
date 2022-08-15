#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ll n,m,t;
   cin>>t;
   while(t--)
   {
     cin>>n>>m;
     cout<<__gcd(n,m)<<" ";
     ll lcm=(n/__gcd(n,m)*m);
     cout<<lcm<<endl;

   }
	return 0;
}
