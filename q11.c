#include<stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3,s,area;
    printf("side1");
    scanf("%f",&s1);

    printf("side2");
    scanf("%f",&s2);

    printf("side3");
    scanf("%f",&s3);
    
    s=(s1+s2+s3)/2;
    area= sqrt(s*(s-s1)*(s-s2)*(s-s3));

    printf("area of triangle %f",area);
    
    return 0;
}