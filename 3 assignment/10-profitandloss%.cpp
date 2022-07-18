#include<stdio.h>
int main()
{
    int sp,cp,pp,lp;
    printf("Enter selling and cost  price : ");
    scanf("%d%d",&sp,&cp);
    pp=((sp-cp)*100/cp);
    lp=(cp-sp)*100/cp;
    if(sp>cp)
        printf("profit percentege = %d",pp);
    else
        printf("loss percentage = %d",lp);
    return 0;

}