#include<bits/stdc++.h>
using namespace std;
int trailing_zero(int n)
{
    int c=0;
    for(int i=5;n/i>=1;i*=5)
    {
        c+=n/i;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<trailing_zero(n);


   /*int n;
   cin>>n;
   cout<<n<<" ";
   while(n!=1)
   {
       if(n%2==1)
       {
           n=(n*3)+1;
           cout<<n<<" ";
       }
       else
       {
           n/=2;
           cout<<n<<" ";
       }
   }
   ///cout<<"1"<<endl;
   */

    return 0;
}
