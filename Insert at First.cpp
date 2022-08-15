#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];

    }
    a[0]=1000;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
