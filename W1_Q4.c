
#include<stdio.h>
int main()
{   int num1,num2,sum,sub,mul;float div;
    int choice;
    printf("enter the two numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("1.add\n2.sub\n3.divide\n4.multiply\n");
    printf("enter the choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         sum=num1+num2;
         printf("%d",sum);
         break;
        case 2:
          sub=num1-num2;
          printf("%d",sub);
          break;
        case 3:
          div=num1/num2;
          printf("%f",div);
          break;
        case 4:
          mul=num1*num2;
          printf("%d",mul);
          break;
        default:
          printf("invalid choice");


    }
    return 0;
}
