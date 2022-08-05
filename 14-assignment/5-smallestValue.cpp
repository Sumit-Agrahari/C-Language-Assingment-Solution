/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[10];
    int i,min=100000;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("smallest value is %d",min);
    return 0;
}