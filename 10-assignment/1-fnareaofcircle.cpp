//Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
float area(float);
int main()
{
    float radius,p;
    printf("enter the radius of circle: ");
    scanf("%f",&radius);
    p=area(radius);
    printf("area is %f",p);
    return 0;
}
float area(float r)
{
    return (3.14*r*r);
}