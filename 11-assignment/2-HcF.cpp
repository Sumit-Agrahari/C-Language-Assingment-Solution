#include<stdio.h>
int HCF(int a,int b);
int main()
{
    int a,b,hcf=1;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    printf("HCF is %d",HCF(a,b));
    return 0;
}
/*int HCF(int a,int b)
{
    int min,hcf;
    min=a<b?a:b;
    for(int i=1;i<=min;i++)
        if((a % i == 0) && (b % i == 0))
        hcf=i;
    return hcf;
}
*/
//or
int HCF(int a,int b)
{
    int H;
    H=a<b?a:b;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0&&b%H==0)
        break;
    return H;
}
