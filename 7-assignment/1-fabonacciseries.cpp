#include<stdio.h>
int main()
{
    int prev = 0, cur = 1 , next = 0, n , i;
    printf("Enter a Number ");
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
        next = prev + cur;
        printf("%d ",next);
        prev = cur;
        cur = next;
        
    }
    
    return 0;
}