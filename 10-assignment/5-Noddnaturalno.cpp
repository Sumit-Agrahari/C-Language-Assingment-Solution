//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
int Odd(int);
int main()
{
    int x=0;
    printf("Enter the number :");
    scanf("%d",&x);
    printf("%d",Odd(x));
    return 0;
    
}
int Odd(int n)
{
    int i;

    for(i=1; i<=n; i++){
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    
}