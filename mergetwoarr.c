#include<stdio.h>
int main()
{
    int i,arr1[100],arr2[100],arr3[100],temp;
    printf("Enter 5 value to first array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 5 cvalues to second array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<5;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0;i<5;i++)
    {
        arr3[i]=arr2[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d",arr3[i]);
    }

}