#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%5==0){
        printf("Divisible By 5");
    }
    else{
        printf("non-divisible by 5");
    }
    return 0;
}