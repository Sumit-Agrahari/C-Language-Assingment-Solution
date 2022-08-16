#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int i,j,sum=0,a[n][n],max=0;
    printf("Entr the n element of matric a: ");
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=n-1;i++){
        sum=0;
        for(j=0;j<=n-1;j++){
            sum=sum+a[i][j];
        }
        printf("sum of column is %d\n",sum);
    }
    for(i=0;i<=n-1;i++){
        sum=0;
        for(j=0;j<=n-1;j++){
            sum=sum+a[j][i];
        }
        printf("\nsum of row is %d",sum);
    }
    printf("\n");
    return 0;
}