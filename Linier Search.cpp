#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key,pos=-1;
    cout<<"Enter the number of elements of the array = ";
    cin>>n;
    cout<<"Enter the searching value = ";
    cin>>key;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==key)
        {
            pos++;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"Searching value is not present in the array"<<endl;
    }
    else
    {
        cout<<"key value is found";
    }
}
