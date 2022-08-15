#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n;
    int res=0;
    while(n)
    {
        res+=n%10;
        n/=10;
    }
   if(res%4==1)
   {
       cout<<(m+3)<<endl;
   }
   else if(res%4==2)
   {
       cout<<(m+2)<<endl;
   }
   else if(res%4==3)
   {
       cout<<(m+1)<<endl;
   }
   else
   {
       cout<<"0"<<endl;
   }

    return 0;
}
