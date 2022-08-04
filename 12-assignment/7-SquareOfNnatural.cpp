//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
 void EvenN(int);
 void EvenN(int n)
 {
    if(n==0)
        return;
    EvenN(n-1);
    printf("%d ",n*n);
 }
 int main()
 {
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    EvenN(n);
    return 0;
 }