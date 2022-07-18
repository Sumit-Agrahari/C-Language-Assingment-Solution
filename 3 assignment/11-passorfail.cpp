#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks: ");
    scanf("%d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
        printf("Passed");
    else
        printf("Failed");
    return 0;
}