#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
double C(int a,int b,int c, int d)
{

     b=min(b,a-b);
     a=(a-b)+1;
     d=min(d,c-d);
     c=(c-d)+1;
    int i=1;
    int j=1;
    double res=1.00;
    while(i<=b||j<=d)
    {
        if(i<=b)
        {
          res*=double(a);
           res/=double(i);
           a++;
           i++;
        }
        if(j<=d)
        {
            res*=double(j);
            res/=double(c);
            c++;
            j++;
        }


    }
    return res;

}
int main()
{
    ll t,n,m,x,y;
    while(cin>>n>>m>>x>>y)
    {


        cout<<fixed<<setprecision(5)<<C(n,m,x,y)<<endl;

    }
    return 0;
}
