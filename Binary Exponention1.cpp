#include<bits/stdc++.h>
using namespace std;

int bin(int base,int power)
{
    int res=1;
    while(power)
    {
        if(power%2==0)
      {
        base=base*base;
        power/=2;
       }
       else{
        res=base*res;
        power--;
       }


    }

    return res;
}
int main()
{
   while(1)
   {
       int n,m;
       cin>>n>>m;
       cout<<bin(n,m)<<endl;

   }
    return 0;
}
