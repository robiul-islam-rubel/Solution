#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t,sum,k,tt=1;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        int n;
        cin>>n;
        cout<<"Case "<<tt++<<":"<<endl;
        sum=0;
        while(n--)
        {
            string s;
            cin>>s;
            if(s=="donate")
            {
             cin>>k;
             sum+=k;
            }
            else{
               cout<<sum<<endl;
            }
        }
    }

    return 0;
}
