#include<bits/stdc++.h>
#define M 100
using namespace std;
int a[M];
int temp[M];
void merging(int start, int mid,int endp)
{
    int first,second,i;
    first=start;
    second=mid+1;
    for(int i=first;first<=mid&&second<=endp;i++)
    {
        if(a[first]<a[second])
        {
            temp[i]=a[first++];
        }
        else
        {
            temp[i]=a[second++];
        }
    }
        while(first<=mid)
        {
            temp[i++]=a[first++];
        }
        while(second<=endp)
        {
            temp[i++]=a[second++];
        }
        for(int i=start;i<=endp;i++)
        {
            a[i]=temp[i];
        }

}
void sorting(int start,int endp)
{
    int midp;
    if(start>=endp) return;
    midp=(start+endp)/2;
    sorting(start,midp);
    sorting(midp+1,endp);
    merging(start,midp,endp);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sorting(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
