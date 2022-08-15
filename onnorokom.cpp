#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll tf=1;
 bool cmp(pair<int ,int >a,pair<int,int>b)
{
    return a.second >b.second;
}
bool ischar(char c)
{
    if(c>='a'&&c<='z')
    {
        return true;
    }
    else
    {
        return false;
    }
}
 void solve()
 {
     ll n;
    string s,ss;
    cin>>s;
    ss=s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    for(int i=0;i<ss.size();i++)
    {
        ss[i]-=32;
    }
    cout<<ss<<endl;
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
