//Write a program to print all Prime numbers between two given numbers
//flag is a variable to take any a or b or something
#include<stdio.h>
int main()
{
    int a,b,n,flag=0;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    for(int n=a;n<=b;n++){
        flag=0;
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                flag=1;
        if(flag==0)
            printf("%d ",n);    
    }    
    
    return 0;
}