#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>99&&n<1000)
        printf("number is three digit");
    else
        printf("number is not three digit");
    return 0;
}