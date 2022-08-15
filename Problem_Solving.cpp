#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        int a,b;
        a=count(s.begin(),s.end(),'0');
        //cout<<"Number of zero are : "<<a<<endl;
        //cout<<"Number of one are : "<<l-a<<endl;
        if(s=="01"||s=="10"||s=="0"||s=="1")
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<min(a,l-a)<<endl;
        }
    }
    return 0;
}
