#include<bits/stdc++.h>
using namespace std;
int ar[10];
int top=-1;
 int push(int n)
 {
     if(top==n)
     {
         cout<<"Array is already full!"<<endl;
     }
     else
     {
         top=top+1;
         ar[top]=n;
     }
 }
void pop()
{
    if(top==-1)
    {
        cout<<"There is no value in the array!"<<endl;
    }
    else
    {
        top=top-1;
    }
}
void show()
{
    for(int i=top;i>=0;i--)
    {
        cout<<"The value is : "<<ar[i]<<endl;
    }
}
void solve()
{
    push(1);
    push(2);
    push(3);
    push(4);
    show();

}
int main()
{

    solve();
}
