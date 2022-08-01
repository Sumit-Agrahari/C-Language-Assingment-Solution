#include<stdio.h>
void CheckPrime(int);
int main()
{
    int x;
    printf("Enter the number to check no is prime or not");
    scanf("%d",&x);
    CheckPrime(x);
    return 0;
}
void CheckPrime(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
        if(n%i==0)
            break;
    if(n==i)
        printf("%d Number is prime",n);
    else
        printf("%d number is not prime ",n);
}