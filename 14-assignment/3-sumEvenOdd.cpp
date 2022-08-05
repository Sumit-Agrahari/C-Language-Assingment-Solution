#include<stdio.h>
int main()
{
    int arr[10],i,se=0,so=0;
    printf("enter the numbers: ");
    for(i=0;i<=9;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++){
        if(arr[i]%2==0)
        {
            se=se+arr[i];
        }
        else
        {
            so=so+arr[i];
        }
    }
    printf("\nsum of all even numbers: %d",se);
    printf("\nsum of all odd numbers: %d",so);
    return 0;  
}