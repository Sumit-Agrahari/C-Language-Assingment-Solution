#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
        printf("triangle is valid");
    else
        printf("triangle is not valid");

return 0;
}