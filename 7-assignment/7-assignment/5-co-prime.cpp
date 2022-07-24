#include<stdio.h>
int main()
{
    int a,b,hcf=1;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    int min=a<b?a:b;
    for(int i=1;i<=min;i++){
        if((a % i == 0) && (b % i == 0))
        hcf=i;
    }
    //printf("hcf is %d",hcf);
    if(hcf==1)
        printf("number is co-prime");
    else
        printf("number is not co-prime");
    return 0;
}