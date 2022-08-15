#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

  string s,s1="";
  cin>>s;
  int l=s.size();
  bool flag=false;
  ll zero,th,ni,mx;
  zero=th=ni=0;
  for(int i=0;i<l;i++)
  {
    if(s[i]=='0')
    {
       zero++;
    }
    else if(s[i]=='3')
    {
        th++;
    }
    else if(s[i]=='9')
    {
        ni++;
    }

  }
  ///cout<<"Value number of zero : "<<zero<<endl;
  if(th>=ni&&th>=1)
  {
      ///cout<<"3 er majhe ashci : "<<endl;
       while(th>0)
       {
           cout<<"3";
           th--;
       }
  }
  else if(ni>=th&&ni>=1)
  {
      ///cout<<"Nine er majhe ashci : "<<endl;

      while(ni>0)
      {
          cout<<"9"<<endl;
          ni--;
      }
  }
  else if(zero>=1)
  {
      cout<<"0"<<endl;
  }
  else
  {
      cout<<"-1"<<endl;
  }

    return 0;
}
