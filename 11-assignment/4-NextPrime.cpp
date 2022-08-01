#include<stdio.h>
void CheckPrime(int);
int main()
{
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    CheckPrime(x);
    return 0;
}
void CheckPrime(int n)
{
    int i,j,flag;
    for(j=n+1;j<=n;j++)
    {
        flag=0;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            printf("%d",n);
    }
}