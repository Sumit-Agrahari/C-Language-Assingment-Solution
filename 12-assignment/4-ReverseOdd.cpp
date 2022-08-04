//Write a recursive function to print first N odd natural numbers in reverse orde
#include<stdio.h>
 void RevN(int);
 void RevN(int n)
 {
    if(n==0)
        return;
    printf("%d ",2*n-1);
    RevN(n-1);
 }
 int main()
 {
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    RevN(n);
    return 0;
 }