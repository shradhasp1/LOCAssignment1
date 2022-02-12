#include<stdio.h>
int main()
{
    int num1;
    printf("Enter your number: \n");
    scanf("%d", &num1);
    switch(num1%2)
    {
      case 0:
        printf("%d is even", num1);
        break;
      case 1:
        printf("%d is odd", num1);
        break;
    }
    return 0;
}