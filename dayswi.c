#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number to find day ");
    scanf("%d",&num);
    switch(num)
    {
      case 1:
      printf("Sunday");
      break;
      
      case 2:
      printf("Monday");
      break;

      case 3:
      printf("Tuesday");
      break;

      case 4:
      printf("Wednesday");
      break;

      case 5:
      printf("Thursday");
      break;

      case 6:
      printf("Friday");
      break;

      case 7:
      printf("Saturday");
      break;

      default :
      printf("Wrong number entered");
    }
    return 0;
}