
/// 1 2 3 4 5 6 7 8 9 10- we search for 1, best case-O(1).
/// 1 2 3 4 5 6 7 8 9 10- we search for 10, worst case O(logn)

#include<bits/stdc++.h>
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
    sort(a,a+n);
    int i=0,j=n-1;
    int s;
    cin>>s;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]==s)
        {
            cout<<"value found at "<<mid<<endl;
            break;
        }
        else if(s>a[mid])
        {
            i=mid+1;
        }
        else{
            j=mid-1;
        }

    }
    if(i>j)
    {
        cout<<"Value is not present in this array"<<endl;
    }
    return 0;
}
