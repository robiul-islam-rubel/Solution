#include<bits/stdc++.h>
using namespace std;
void binary_s()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int b=0,e=n-1;
    int s_value;
    cin>>s_value;

    while(b<=e)
    {
        int mid=b+(e-1)/2;
        if(a[mid]==s_value)
        {
            cout<<"Value found at index "<<mid<<endl;
            break;
        }
         if(s_value>a[mid])
        {
            b=mid+1;
        }
        else
        {
            e=mid-1;
        }

    }
}
int main()
{
    binary_s();
    return 0;
}
