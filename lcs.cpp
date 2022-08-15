#include<bits/stdc++.h>
using namespace std;
int longest(string a,string b,int len1,int len2)
{
  int lcs[len1+1][len2+1];
    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            if(i==0||j==0)
            {
                lcs[i][j]=0;
            }
            else if(a[i-1]==b[j-1])
            {
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else
            {
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    return lcs[len1][len2];
}
int main()
{
    string x,y;
    cin>>x>>y;
   int m=x.size();
    int n=y.size();
    cout<<longest(x,y,m,n)<<endl;
    return 0;
}
