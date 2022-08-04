//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
 void EvenN(int);
 void EvenN(int n)
 {
    if(n==0)
        return;
    printf("%d ",2*n);
    EvenN(n-1);
    
 }
 int main()
 {
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    EvenN(n);
    return 0;
 }