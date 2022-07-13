#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("%d %d",x,y);
    return 0;   
}