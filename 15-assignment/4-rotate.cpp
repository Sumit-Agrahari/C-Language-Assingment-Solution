/*Write a function to rotate an array by n position in d direction. The d is an indicative 
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
#include<stdio.h>
int roat(int b[])
{
    int i,j,temp,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(j=0;j<n;j++){
        temp=b[0];
        for(i=0;i<4;i++){
            b[i]=b[i+1];         
        }
        b[4]=temp;  
        
    }
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }
}
int main()
{
    int a[5]={32, 29, 40, 12, 70};
    roat(a);
    return 0;
}
