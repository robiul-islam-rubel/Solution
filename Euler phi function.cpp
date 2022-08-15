#include<bits/stdc++.h>
using namespace std;
int phi(int n)
{
    if(n==1) return 1;
    int res=n;
    ///cout<<res<<endl;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            res-=res/i;
           /// cout<<res<<endl;
        }
    }
    ///cout<<n<<endl;
    if(n>1)
    {
        res-=res/n;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<phi(n)<<endl;

    return 0;
}
