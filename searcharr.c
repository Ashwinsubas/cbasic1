#include<stdio.h>
int main(void)
{
    int i,value[100],limit,flag=0,key;
    printf("Enter the limit of array ");
    scanf("%d",&limit);
    printf("Enter values ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&value[i]);
    }
    printf("Enter the value to search ");
    scanf("%d",&key);
    for(i=0;i<limit;i++)
    {
        if(key==value[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is found at the position %d ",key,i+1);
    }
    else{
        printf("Key not found");
    }
    return 0;

}