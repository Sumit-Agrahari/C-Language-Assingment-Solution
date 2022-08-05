//Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.
#include<stdio.h>

int main()
{
    int arr[10],sum=0,i;
    printf("Enter the number: ");
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++){
        sum=sum+arr[i];
        
    }
    printf("sum is %d",sum);
    return 0;
}