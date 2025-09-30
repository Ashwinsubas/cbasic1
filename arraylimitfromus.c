#include<stdio.h>
int main()
{
    int i,arr[100],limit;
    printf("Enter array limit");
    scanf("%d",&limit);
    printf("Enter the values to store in array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered values are :");
    for(i=0;i<limit;i++)
    {
    printf("%d ",arr[i]);
    }

    return 0;
}