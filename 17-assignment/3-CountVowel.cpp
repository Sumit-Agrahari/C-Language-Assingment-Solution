#include<stdio.h>
int main()
{
    char arr[]="SumitKumar";
    int i=0,count=0;
    while(arr[i]!='\0')
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}
