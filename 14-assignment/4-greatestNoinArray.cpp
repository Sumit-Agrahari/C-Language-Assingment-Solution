/* Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[10];
    int i,max=-999999;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("greatest value is %d",max);
    return 0;
}