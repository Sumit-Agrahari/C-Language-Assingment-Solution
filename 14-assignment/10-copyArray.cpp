#include<stdio.h>
int main()
{
    int a[10];
    int i,b[10];
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    
    
    return 0;
}
