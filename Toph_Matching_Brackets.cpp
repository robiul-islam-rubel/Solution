#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  s[0]=toupper(s[0]);
  for(int i=1;i<s.size();i++)
  {
      if(s[i]=='s')
      {
          s[i]='$';
      }
      else if(s[i]=='i')
      {
          s[i]='!';
      }

  }
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='o')
      {
          cout<<"()";
      }
      else
      {
          cout<<s[i];
      }
  }
  cout<<"."<<endl;

    return 0;
}
