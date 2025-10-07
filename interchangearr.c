#include<stdio.h>
int main()
{
    int i,arr1[100],arr2[100],temp[100];
    printf("Enter 5 values to first array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 5 values to second array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++)
    {
    temp[i]=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp[i];
    }
    
    printf("First array ");
   for(i=0;i<5;i++)
   {
    printf("%d ",arr1[i]);
   }
   printf("Second array ");
   for(i=0;i<5;i++)
   {
    printf("%d ",arr2[i]);
   }

}