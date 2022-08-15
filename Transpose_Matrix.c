#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],transpose[10][10],i,j,k,r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf("After Transpose matrix is: \n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",transpose[i][j]);
            if(j==r-1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
