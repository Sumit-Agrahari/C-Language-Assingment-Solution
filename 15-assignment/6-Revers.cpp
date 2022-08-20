// Write a function in C to read n number of values in an array and display it in reverse 
//order

#include<stdio.h>
int main()
{
    int a[5]={6,7,5,3,8};
    int temp,start=0,end=4;
        while(start<end){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--; 
        }
        for(int i=0;i<5;i++){
            printf("%d ",a[i]);
        } 
    return 0;
}