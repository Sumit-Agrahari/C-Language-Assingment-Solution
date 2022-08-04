//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
 void Binary(int);
 void Binary(int n)
 {
    if(n==0)
        return;
    Binary(n>>1);
    printf("%d",n&1);
 }
 int main()
 {
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    Binary(n);
    return 0;
 }