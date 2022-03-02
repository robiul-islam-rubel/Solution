#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n,m,k,z,y,x,f,c,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(m>=n)
        {
            k=(2*n);
        ///cout<<k<<endl;
        z=((k+2)/2)*n;
        y=(2*m)-1;
       /// cout<<y<<endl;
        f=(y+1)/2*m;
        ///cout<<f<<endl;
        sum=abs(f-z);
        cout<<sum<<endl;

        }
        else
        {
              k=(2*m);
        ///cout<<k<<endl;
        z=((k+2)/2)*m;
        y=(2*n)-1;
       /// cout<<y<<endl;
        f=(y+1)/2*n;
        ///cout<<f<<endl;
        sum=abs(f-z);
        cout<<sum<<endl;

        }




    }

}
