#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(n%3==0&&n%2==0)
        printf("number is divisible by three and two");
    else 
        printf("number is not divisible by three and two");
    return 0;
}