#include<stdio.h>
int main()
{
    int prev = 0, cur = 1 , next = 0, n , i;
    printf("Enter a Number ");
    scanf("%d",&n);
    
    for(i = 0 ; 1 ; i++)
    {   
        next = prev + cur;
        prev = cur;
        cur = next;

        if(next == n)
        {
            printf(" no found ");
            break;
        } 
        if(next>n)
        {
            printf("not found");
            break;
        }  
    }
    return 0;
}    