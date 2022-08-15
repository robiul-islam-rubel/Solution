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
    a[0]=NULL;
    for(int i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
