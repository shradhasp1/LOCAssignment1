#include<stdio.h>
int main()
{
    float Radius, Diameter, Circumference, Area;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &Radius);
    Diameter=2*Radius;
    Circumference=2*3.14*Radius;
    Area=3.14*Radius*Radius;

    printf("Diamter of circle=%.2f \n", Diameter);
    printf("Circumference of circle=%.2f \n", Circumference);
    printf("Area of circle=%.2f \n", Area);
    return 0;
}