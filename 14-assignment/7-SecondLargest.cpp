#include<stdio.h>
int main()
{
    int a[10],temp;
    int i,j;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }

    printf("%d ",a[8]);
    return 0;
}