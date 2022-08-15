#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t<=300)
    {
        cout<<"Diamond"<<endl;
    }
    else if(t<=360)
    {
        cout<<"Gold"<<endl;
    }
    else if(t<=420)
    {
        cout<<"Silver"<<endl;
    }
    else if(t<=540)
    {
        cout<<"Bronze"<<endl;
    }
    else if(t>540)
    {
        cout<<"Next Time Please!"<<endl;
    }
}
