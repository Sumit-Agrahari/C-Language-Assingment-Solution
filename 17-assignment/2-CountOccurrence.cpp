#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="SumitKumar";
    char b;
    printf("Enter the charcter: ");
    scanf("%c",&b);
    int i=0,count=0;
    while(arr[i]!='\0')
    {
        if(arr[i]==b){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}