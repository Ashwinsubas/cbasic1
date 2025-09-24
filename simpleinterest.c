#include<stdio.h>
int main(){
    int p;
    float r,n,si;
    printf("Enter the principal amount");
    scanf("%d",&p);
    printf("Enter interest rate");
    scanf("%f",&r);
    printf("Enter the number of years");
    scanf("%f",&n);
    si=((p*r*n)/100);
    printf("simple interest is %f",si);
    return 0;
}