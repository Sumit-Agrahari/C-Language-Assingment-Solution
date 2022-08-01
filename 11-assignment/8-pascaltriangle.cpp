//Write a function to print PASCAL Triangle. (TSRN)
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
    return (fact(n)/(fact(r)*fact(n-r)));
}
/*
int perm(int n,int r)
{
    return (fact(n)/fact(n-r));
}*/
void pasc(int line)
{
    int i,j,r,k;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i&&k){
                printf("%d",comb(i-1,r));
                k=0;
                r++;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
int main()
{
    pasc(5);
}
