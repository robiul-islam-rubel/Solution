#include<stdio.h>
#include<conio.h>
void solve(int a,int b)
{
    if(a>b)
    {
        printf("a is bigger than b ");
    }
    else
    {
        printf("b is bigger than a ");
    }
}
int main()
{
    int x,y;
    printf("Enter two integer numbers : ");
    scanf("%d%d",&x,&y);
    solve(x,y);
}
