//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int n=0;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}