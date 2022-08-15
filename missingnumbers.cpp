#include<bits/stdc++.h>
using namespace std;
int missing(int a,int b,int c,int d)
{

    return a-(b+c+d);
}
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    cout<<missing(a,b,c,d)<<endl;
}
