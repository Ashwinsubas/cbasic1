#include<stdio.h>
int main()
{
    int i,j,a[100],temp,limit;
    printf("Enter the limit");
    scanf("%d",&limit);
    printf("Enter the values");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",a[i]);
    }
    
}