#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<iomanip>
#include<queue>

using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }



  return 0;
}

