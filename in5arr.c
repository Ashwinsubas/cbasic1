#include<stdio.h>
int main(void)
{
    int i,a[5];
    printf("Enter 5 values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Values are ");
    for(i=0;i<5;i++)
    {
         printf(" %d ",a[i]);
    }
    
    return 0;
}