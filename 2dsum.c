#include<stdio.h>
#include<conio.h>

void main()
{
    int value1[100][100],value2[100][100],i,j,k=0,sum[100][100],limit;
    printf("Enter the limit");
    scanf("%d",&limit);

    printf("Enter the first values : \n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            scanf("%d",&value1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the second values : \n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            scanf("%d",&value2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
             sum[i][j]=value1[i][j]+value2[i][j];
        }
    }

    printf("sum of 2d is: \n");

   for(i=0;i<limit;i++)
   {
    for(j=0;j<limit;j++)
    {
        printf("%d ",sum[i][j]);
    }
    printf("\n");
   }
}