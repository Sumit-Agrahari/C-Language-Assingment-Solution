#include<stdio.h>
int main()
{
    int n,result;
    printf("Enter the number : ");
    scanf("%d",&n);
    result=n&1;
    if(result==1){
        printf("odd");
    }
    else{
        printf("even");
    }
    return 0;
}