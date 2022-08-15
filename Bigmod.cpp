#include<iostream>
#include<stack>
#include<vector>
#include<iterator>

using namespace std;
int main()
{


stack<int>s;

  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;
    s.push(k);
  }

 cout<<s.top();
 ///cout<<s.size();

 while(s.top()==0)
 {
     s.pop();
 }
 cout<<s.size();

	return 0;
}
