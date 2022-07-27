#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
            {
            printf("*");
        }
        m--;
        printf("\n"); 
    }
    return 0;
}
/*              or(simple and good method)
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/