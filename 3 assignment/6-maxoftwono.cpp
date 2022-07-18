#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    if(a>=b)
        printf("greater no is %d",a);
    else
        printf("greater no is %d",b);
}