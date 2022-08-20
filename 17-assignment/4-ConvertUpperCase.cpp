#include<stdio.h>
int main()
{
    char arr[]="Sumit Kumar";
    int i=0,count=0;
    while(arr[i]!='\0')
    {
        if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i]=arr[i]-32;
            
        }
        i++;
    }
    printf("%s",arr);
    return 0;
}