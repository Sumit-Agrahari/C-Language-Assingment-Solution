//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
int NaturalNo(int);
int main()
{
    int x=1;
    printf("enter the number: ");
    scanf("%d",&x);
    printf("%d ",NaturalNo(x));
    return 0;
}
int NaturalNo(int n)
{
    int i;
    for(i=1;i<n;i++){
        printf("%d\t",i);
    }
}