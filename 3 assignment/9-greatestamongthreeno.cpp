#include<stdio.h>
int main()
{
    int a,b, c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&b>c)
        printf("%d",a);
    else if(c>=a)
        printf("%d",c);
    else
        printf("%d",b);
    return 0;
}