//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int Gret(int b[ ])
{
    int max=-999999,i;
    printf("Enter the  number ");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<b[i])
            max=b[i];
    }
    return max;
}
int main()
{
    int a[10];
    printf("%d",Gret(a));
    return 0;

}