#include<stdio.h>
int main()
{
    char arr[10];
    fgets(arr,10,stdin);
    int i=0;
    int j=3;
    int temp;
    while(i<=j){       //O(n/2)
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
        }
    printf("%s",arr);

}