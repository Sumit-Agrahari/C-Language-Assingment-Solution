/*Write a function to calculate the number of combinations one can make from n items 
and r selected at a time. (TSRS)*/
#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int comb(int n,int r)
{
    return (fact (n)/(fact(r)*fact(n-r)));
}
int main()
{
    int n1=0 ,r1=0;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&r1);
    printf("%d",comb(n1,r1));
    return 0;
}
