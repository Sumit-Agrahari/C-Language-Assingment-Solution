#include<stdio.h>
void Fab(int);
int main()
{
    int x;
    printf("Enter the numbers: ");
    scanf("%d",&x);
    Fab(x);
    return 0;
}
void Fab(int n)
{
    int i,cur=1,prev=0,next=0;
    for(i=0;i<n;i++){
        next=cur+prev;
        printf("%d ",next);
        prev=cur;
        cur=next;
        
    }
    
}