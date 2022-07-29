/*Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS)*/

#include<stdio.h>
int CheckEvenOdd(int);
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("%d",CheckEvenOdd(n));
    return 0;
    
}
int CheckEvenOdd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}