#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

 void solve()
 {
		  ll n,a,b,c,x,odd,even,sum,cnt(0),st(0),lt(0),l,f,g;
	     cin>>a>>b;
	     if(a%2==0&&b%2==0)
	     {
	     	cout<<"YES"<<endl;
	     }
	     else if(a%2==1&&b%2==1)
	     {
	     	cout<<"NO"<<endl;
	     }
	     else if(a%2==1&&b%2==0)
	     {
	     	cout<<"YES"<<endl;
	     }
	     else if(a%2==0&&b%2==1)
	     {
	     	cout<<"NO"<<endl;
	     }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}