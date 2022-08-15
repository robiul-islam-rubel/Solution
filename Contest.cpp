#include<bits/stdc++.h>
#define ll long long int
#define gcd(a,b) __gcd(a,b)
#define endl "\n"
ll tc=1;
using namespace std;
 bool isPrime(int n)
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
bool is_sort(ll ar[],ll n)
{
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]>ar[i+1]) return false;
    }
    return true;
}
bool cmp(pair<string, ll>& a,
         pair<string, ll>& b)
{
    return a.second < b.second;
}
void sort(map<string, ll>& M)
{

    // Declare vector of pairs
    vector<pair<string, ll> > A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);

    // Print the sorted value
    for (auto& it : A) {

        cout << it.first << ' '
             << it.second << endl;
    }
}
ll num(ll n)
{
    ll ff,gg=0;
    while(n!=0)
    {
        ff=n%10;
        gg=(gg*10)+ff;
        n/=10;
    }
    return gg;
}

 void solve()
 {
    ll n,a,b,c,x,odd(0),even(0),sum(0),cnt(0),st(0),lt(0),l,f,g,k,d,e,tot,z,y,m;
    ll ar[3];
    for(int i=0;i<3;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+3);
//    for(int i=0;i<3;i++)
//    {
//        cout<<ar[i]<<" ";
//    }
     sort(ar,ar+3);

    x=ar[0];
    y=ar[1];
    z=ar[2];
   if(x==y&&y==z)
   {
       cout<<"YES"<<endl;
   }
   else if(x==y&&x!=z&&y!=z)
   {
       cout<<"YES"<<endl;
   }
   else
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
