#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,a;
    cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      cin>>k;
      v.push_back(k);
  }
  vector<int>::iterator lo,up,it;
  cin>>m;
  for(int i=0;i<m;i++)
  {
      cin>>a;
      lo=lower_bound(v.begin(),v.end(),a);
      up=upper_bound(v.begin(),v.end(),a);
      int x=lo-v.begin()+1;
      int y=up-v.begin()+1;
      it=find(v.begin(),v.end(),a);
      if(it!=v.end())
      {
          cout<<"Yes"<<" "<<x<<endl;
      }
      else
      {
          cout<<"No"<<" "<<x<<endl;
      }

      //cout<<"Lower bound of a is : "<<lo-v.begin()+1<<endl;
     // cout<<"Upper bound of a is : "<<up-v.begin()+1<<endl;
  }



    return 0;
}


