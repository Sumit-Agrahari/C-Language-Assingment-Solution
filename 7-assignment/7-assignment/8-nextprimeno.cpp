//Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int n,a=0,b;
    printf("enter the number: ");
    scanf("%d",&b);
    for(int n=b;1;n++){
        a=0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0)
                a=1;
        }
        if(a==0){
            printf("%d",n); 
            break; 
        }
    }    
    
    return 0;
}