#include<stdio.h>
int Square(int);
int main()
{
    int n;
    printf("Entere the numbers: ");
    scanf("%d",&n);
    printf("%d",Square(n));
    return 0;
    
}
int Square(int x)
{
    int y;
    y=x*x;
    return y;
}