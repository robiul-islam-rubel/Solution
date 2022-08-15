#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<iomanip>

using namespace std;
int main()
{  stack<int > s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}

  return 0;
}

