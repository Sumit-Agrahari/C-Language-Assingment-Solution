#include<stdio.h>
int MaxNo(int ,int );
int main()
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("%d%d",MaxNo(n1,n2));
    return 0;
}
int MaxNo(int n1,int n2)
{
    int L;
    for(L=1;L<=n1*n2;L++)
    {
        if (L % n1 == 0 && L % n2 == 0) 
            break;   
    }
    printf("The LCM of %d and %d is %d.", n1, n2, L);
    return L;
}