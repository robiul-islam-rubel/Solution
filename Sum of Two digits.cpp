#include<bits/stdc++.h>
using namespace std;
const int N=40;
void sum(int p,int n,vector<int>d)
  {
      p=0;
      for(int i=0;i<n;i++)
      {
          p+=d[i];
      }
      cout<<"sum is "<<p<<endl;

  }
int main()
{
     int accum=0;
  vector<int>data(N);

     for(int i=0;i<N;i++)
     {
        data[i]=i;

     }
   sum(accum,N,data);




    return 0;
}
