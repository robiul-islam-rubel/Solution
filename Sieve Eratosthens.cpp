#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 if(n==4) cout<<"22"<<endl;
 else
 {
     for(int i=3;i<=500;i+=2)
     {
         for(int j=3;j<=500;j+=2)
         {
             if(i*j==n)
             {
                 cout<<i<<j<<endl;

             }
             break;
         }
     }
 }
    return 0;
}
