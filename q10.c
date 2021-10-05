#include<stdio.h>
int main()
{
    int side, area;

    printf("value of side ");
    scanf("%d", &side);

    area = side*side;

    printf("area of square %d", area);
    return 0;

}