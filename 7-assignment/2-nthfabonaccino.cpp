#include<stdio.h>
int main()
{
    int prev = 0, cur = 1 , next = 0, n , i;
    printf("Enter a Number ");
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
        next = prev + cur;
        prev = cur;
        cur = next;
        
    }
    printf("%d",next);
    return 0;
}