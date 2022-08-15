#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        cout<<"IEEE "<<i<<": ";
        if(a==b)
        {
            cout<<"Both are Equal"<<endl;
        }
        else if(a>b)
        {
            cout<<"Greater"<<endl;
        }
        else if(a<b)
        {
            cout<<"Smaller"<<endl;
        }
    }
    return 0;
}
