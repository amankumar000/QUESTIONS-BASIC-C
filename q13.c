#include<stdio.h>
int main()
{
float r;
float volume;

printf("value of radius");
scanf("%f",&r);
volume =1.33*3.14*r*r*r;
printf ("volume of sphere is \n %f", volume);
return 0;
}