#include<stdio.h>
int main()
{
    int n,fact;
    printf("enter number");
    scanf("%d",&fact);
    n=fact-1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
    
    