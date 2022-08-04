// Write a recursive function to print first N natural numbers
#include<stdio.h>
void PrintN(int);
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    PrintN(n);
    return 0;
}
void PrintN(int n)
{
    
    if(n==0)
        return;
    PrintN(n-1);
    printf("%d  ",n);
    
}
