#include<bits/stdc++.h>
using namespace std;
int matrix(int row,int col)
{
    if(row==1||col==1) return 1;
    else
        return matrix(row-1,col)+matrix(row,col-1);
}
int main()
{


int n;
cin>>n;
cout<<matrix(n,n);

    return 0;

}
