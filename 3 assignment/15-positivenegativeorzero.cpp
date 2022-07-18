#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(n>0){
        printf("positive");
    }
    else if(n<0){
        printf("Negative");
    }
    else{ 
        printf("zero");
    }
    return 0;
}