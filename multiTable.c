#include<stdio.h>

int main()
{
    int n,num,sum=0, i;
    printf("Enter a number to print its multiplication upto 10 : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum = i * n;
        printf("%d * %d = %d \n" ,n,i,sum);
    }
}
