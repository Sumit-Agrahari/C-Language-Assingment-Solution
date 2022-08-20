#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]="Bhopal";
    int i;
    for(i=0;str[i];i++);
    printf("Lenth of String is : %d",i);
    return 0;
}