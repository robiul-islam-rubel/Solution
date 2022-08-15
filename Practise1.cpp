#include<bits/stdc++.h>
#define ll long long int
#define mx 10e9
using namespace std;
int sum(int n)
{
 if(n%2==0)
 {
     return n/2;
 }

 else
    return -n+sum(n-1);


}
int main()
{
 double n,m,n2,n5,n8,n22,n55,n88,k;
   ll k1;
    cin>>n>>k;
    n2=n*2;
    n5=n*5;
    n8=n*8;
    n22=ceil(n2/k);
     n55=ceil(n5/k);
     n88=ceil(n8/k);
   k1=(long long int)(n22+n55+n88);
   cout<<k1<<endl;
    return 0;
}
