#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter a number :");
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i);
        ++i;
    }
    printf("\n");
    return 0;
}