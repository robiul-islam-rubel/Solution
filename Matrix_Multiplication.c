#include<stdio.h>
#include<conio.h>

int main()
{

int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;
printf("Enter the row and column for first matrix : ");
scanf("%d%d",&r1,&c1);
printf("Enter the row and column for second matrix : ");
scanf("%d%d",&r2,&c2);


for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        scanf("%d",&first[i][j]);
    }
}
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        scanf("%d",&second[i][j]);
    }
}
int sum=0;
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c1;k++)
        {
            sum+=first[i][k]*second[k][j];
        }
        result[i][j]=sum;
        sum=0;
    }
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        printf("%d ",result[i][j]);
    }
    printf("\n");
}


}
