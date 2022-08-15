#include<stdio.h>
#include<conio.h>
#define ll long long int
void fact(int n)
{
    if(n<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
      ll fact=1;
      for(int i=2;i<=n;i++)
      {
          fact*=i;
      }
      printf("%lld",fact);
    }
}
int main()
{
    int m;
    printf("Enter a integer number : ");
    scanf("%d",&m);
    printf("Factorial of %d is ",m);
    fact(m);
    return 0;
}
