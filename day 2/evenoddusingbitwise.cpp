#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if ((n | 1) > n){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}