#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(j>=i+1&&j<=9-i ){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}