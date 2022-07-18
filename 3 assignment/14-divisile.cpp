#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(n%7==0||n%3==0)
        printf("number is divisible by seven or three");
    else 
        printf("number is not divisible by seven or three");
    return 0;
}