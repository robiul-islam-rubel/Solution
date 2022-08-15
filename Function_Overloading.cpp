#include<bits/stdc++.h>
using namespace std;
void sum(int a,int b)
{
    cout<<"Sum of two value are : "<<(a+b)<<endl;
}
void sum(int a,int b,int c)
{
    cout<<"Sum of three value are  : "<<(a+b+c)<<endl;
}
void sum(float a,float b)
{
    cout<<"Sum of two numbers are : "<<(a+b)<<endl;
}
int main()
{
    sum(2,3);
    sum(2,3,4);
    //sum(4.5,5.5);

    return 0;
}
