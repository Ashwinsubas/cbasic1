#include<stdio.h>
#include<conio.h>

int getArray(int values[],int *limit);
int displayArray(int values[],int);

int main()
{
    int values[100],limit;
    getArray(values,&limit);
    displayArray(values,limit);
}

int getArray(int values[],int *limit)
{
    int i;

    printf("Enter the limit");
    scanf("%d",limit);
    printf("Enter the values to array");
    for(i=0;i<*limit;i++)
    {
        scanf("%d",&values[i]);
    }
}
int displayArray(int values[],int limit)
{
    int i;
    for(i=0;i<limit;i++)
    {
        printf("%d",values[i]);
    }
}