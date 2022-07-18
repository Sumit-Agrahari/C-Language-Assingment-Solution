#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the coffician of quadratic eq a b and c ");
    scanf("%d%d%d",&a,&b,&c);
    int d;
    d=(b*b)-(4*a*c);
    if(d>0)
        printf("roots are distinct");     
    else if(d==0)
        printf("roots are real and equal");
    else
        printf("root are imaginary");
    return 0;
}