#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int k=(n+m)/2;
        int z=n-k;
        if(m>n)
        {
            cout<<"impossible"<<endl;
        }
        else if((n+m)%2==0)
        {
            cout<<k<<" "<<z<<endl;
        }
        else
        {
            cout<<k+1<<" "<<z-1<<endl;
        }
    }
    return 0;
}
