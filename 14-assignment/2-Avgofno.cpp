/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the use*/

#include<stdio.h>
int main()
{
    int arr[10],sum=0,i;
    float avg;
    printf("Enter the number: ");
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++){
        sum=sum+arr[i];
        avg=sum/10.0;
    }
    printf("Average is %f",avg);    
    return 0;
}
    