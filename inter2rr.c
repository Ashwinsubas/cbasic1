#include<stdio.h>
int main(void)
{
    int i,j,arr1[100],arr2[100],limit,temp[100];
    printf("Enter the limit for arrays ");
    scanf("%d",&limit);
    printf("Enter the values for array 1 ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the values for array 2 ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Array 1 before swap ");
    for(i=0;i<limit;i++)
    {
        printf(" %d",arr1[i]);
    }
    printf("\nArray 2 before swap ");
    for(i=0;i<limit;i++)
    {
        printf(" %d",arr2[i]);
    }
    for(i=0;i<limit;i++)
    {
        temp[i]=arr1[i];
    }
    for(i=0;i<limit;i++)
    {
         arr1[i]=arr2[i];
    }
    for(i=0;i<limit;i++)
    {
        arr2[i]=temp[i];
    }
    printf("\nArray1 after swap ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nArray 2 after swap ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr2[i]);
    }


}