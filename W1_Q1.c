#include<stdio.h>
int main()
{
    char Name[20], Branch[30], Hobby[50];
    printf("Enter your name: \n");
    scanf("%s", &Name);

    printf("Enter your branch: \n");
    scanf("%s", &Branch);

    printf("Enter your hobbies: \n");
    scanf("%s", &Hobby);

    int Regd;
    printf("Enter your registration number: \n");
    scanf("%d", &Regd);

    printf("Your name is: %s \n", Name);
    printf("Your branch is: %s\n", Branch);
    printf("Your hobbies are: %s \n", Hobby);
    printf("Your registration number is: %d \n", Regd);
    return 0;
}