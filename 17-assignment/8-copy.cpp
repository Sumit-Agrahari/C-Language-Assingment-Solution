#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="sumit Kumar Agrahari";
    char b[100];
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        b[i]=a[i];
        printf("%c",b[i]);
    }
    
    return 0;
}