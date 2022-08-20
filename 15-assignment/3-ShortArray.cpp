//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int sort(int b[])
{
    int a[10],temp;
    int i,j;
    printf("Enter 10 numbers:\n");
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
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[10];
    sort(a);
    return 0;
}