#include<stdio.h>
int main()
{
    char arr[]="SUMIT KumAR";
    int i=0,count=0;
    while(arr[i]!='\0')
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]=arr[i]+32;
            
        }
        i++;
    }
    printf("%s",arr);
    return 0;
}