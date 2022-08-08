//. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int small(int b[ ])
{
    int min=100000,i;
    printf("ENter the number");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        if(min>b[i])
            min=b[i];
    }
    return min;
}
int main()
{
    int a[10];
    printf("%d",small(a));
    return 0;
}
