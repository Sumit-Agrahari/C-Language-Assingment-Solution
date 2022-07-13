#include<stdio.h>
int main()
{
    int n , digit;
    printf("Enter a number \n : ");
    scanf("%d%d",&n,&digit);
    n=n*10+digit;
    printf("%d",n);
    return 0;
}