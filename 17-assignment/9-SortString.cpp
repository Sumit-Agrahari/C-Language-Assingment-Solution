#include<stdio.h>
#include<string.h>
int sort(char b[])
{
    char a[]="sumitkumar";
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    for(i=0;i<10;i++)
    {
        printf("%c",a[i]);
    }
}
int main()
{
    char a[10];
    sort(a);
    return 0;
}