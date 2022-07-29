//Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
float Simpleinterest(float , float, float);
int main()
{
    float p,r,t,si;
    printf("Enter The value of p r and t : ");
    scanf("%f%f%f",&p,&r,&t);
    si=Simpleinterest(p,r,t);
    printf("Simple Interest is %f",si);
    return 0;
}
float Simpleinterest(float p,float r,float t)
{
    float SI;
    SI=(p*r*t)/100;
    return SI;
//or return ((p*r*t)/100);
}
