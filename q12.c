#include<stdio.h>
int main()
{
    float a, b, h;
    float Area;

    printf("value of base a");
    scanf("%f",&a);

    printf("value of base b");
    scanf("%f",&b);

    printf("value of height h");
    scanf("%f",&h);

    Area = 0.5*(a+b)*h;

    printf("Area of Trapezium %f",Area);

return 0;

}