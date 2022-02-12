#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);
    
    if(num1 > num2)
    {
        printf("%d is maximum", num1);
    }
    else
    {
        printf("%d is maximum", num2);
    }
    return 0;
}