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
    int val,pos;
    cin>>val;
    cin>>pos;
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
