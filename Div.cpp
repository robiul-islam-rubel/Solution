#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,sum1;
    cin>>n;
    int a[6];
    while(n--)
    {
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
        }
        sum=sum1=0;
        for(int i=0;i<5;i++)
        {
            a[i]*=a[5];
            sum+=a[i];
        }
        if(sum>120)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;



    }
    return 0;
}
