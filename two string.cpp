#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int len1=a.size();
    int len2=b.size();
    int count=0,d=0;
    for(int i=0;i<len1;i++)
    {
        for(int j=d;j<len2;j++)
        {
            if(a[i]==b[j])
            {
                count++;
                d=j+1;
                break;
            }
        }
    }
    if(count==len1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
