#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int main()
 {
     int n,c=0;
     cin>>n;
     char a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];

     }

     for(int i=0;i<n;i++)
     {
         if(a[i]==a[i+1])
         {
             c++;
         }
     }
     if(c>0)
     {
         cout<<"Change needed"<<endl;
     }
     else
     {
         cout<<"No change needed"<<endl;
     }
     return 0;
 }
