#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10]="sumit123";
    int i=0,Alphacount=0,digcount=0,specount=0;
    while(arr[i]!='\0')
    {
         
        if(arr[i]>='a' && arr[i]<='z' || arr[i]>='A' && arr[i]<='Z')
        {
            Alphacount++;
                
        }   
        else if(arr[i]>=0 || arr[i]<=9){
            digcount++;
        }
        else
        {
            specount++;
        }
        i++;
           
    } 
    printf("%d\n%d\n%d",Alphacount,digcount,specount);
    
    return 0;
}