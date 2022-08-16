#include<stdio.h>
int main()
{
    
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int i,j,sum=0,a[n][n];
    printf("Entr the nine element of matric a: ");
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n;j++){
            if(i==j){
                sum=sum+a[i][j];  
            }
            
        }
        
    }
    printf("%d",sum);
        printf("\n");
    return 0;

}