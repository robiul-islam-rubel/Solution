#include<iostream>
using namespace std;
int divisor(int n)
{
    int div=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
           cout<<n<<endl;

        }
        else if(n%i==0)
        {
          cout<<i<<" ";
        }
    }
   /// return divisor;
}
int main()
{
    int x;
    cin>>x;
    cout<<divisor(x)<<endl;
}
