#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
   int n,sum=0;
   cin>>n;
   if(n<=2)
   {
       cout<<"-1"<<endl;
   }
   else
   {
       for(int i=n;i>=1;i--)
       {
           cout<<i<<" ";
       }
   }

    return 0;
}
