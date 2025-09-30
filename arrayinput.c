#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("Enter the values to store in array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered values are :");
    for(i=0;i<5;i++)
    {
    printf("%d ",arr[i]);
    }

    return 0;
}