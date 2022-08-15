/// This is algorithm of Bubble Sort using C++


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; /// size of array
    cin>>n;
    int a[n];/// creating an array with n size
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; /// taking input
    }
    for(int i=0;i<n-1;i++) /// if we sort n-1 elements then last element gets its position
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
