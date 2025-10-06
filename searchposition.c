#include<stdio.h>
int main()
{
    int i,values[100],limit,searchkey,flag=0;
    printf("Enter the limit");
    scanf("%d",&limit);
    printf("Enter the values");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);
    }
    printf("Enter a value that you entered to find its position in array");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++)
    {
        if(searchkey==values[i]){
        flag=1;
        break;
        }
    }
    if(flag==1)
    {
        printf("position of %d is %d",searchkey,i+1);
    }
    else
    {
        printf("You entered wrong searchkey");
    }
}