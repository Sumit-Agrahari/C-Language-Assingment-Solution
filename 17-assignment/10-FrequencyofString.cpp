#include<stdio.h>
int main()
{
    char a[]="sumitkumar";
    int i;
    int freq[150]={0};
    for(i=0;i<10;i++){
        freq[a[i]]++;
    }
    for(i=0;i<150;i++){
        if(freq[i]!=0)
        printf("%c ==> %d\n",i,freq[i]);
    }
    return 0;
}