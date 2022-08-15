#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  ((a/gcd(a, b)*b)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
bool flag=true;
int main()
{
  long long int n,c=0;
  cin>>n;
  vector<int >v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
      if(v[i]%2!=0)
      {
          c++;
      }
  }
  if(c==0)
  {
      cout<<"Second"<<endl;
  }
  else
  {
      cout<<"First"<<endl;
  }





    return 0;
}
