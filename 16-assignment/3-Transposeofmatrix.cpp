#include<stdio.h>
int main()
{
    int A[3][3];
    int i,j;
    printf("Entr the nine element of matric A: ");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("Transpose of matrix A is%d",A[j][i]);
        }
        printf("\n");
    }
    return 0;

}