 // Write a recursive function to print first N natural numbers in reverse order
 #include<stdio.h>
 void RevN(int);
 void RevN(int n)
 {
    if(n==0)
        return;
    printf("%d ",n);
    RevN(n-1);
    
 }

 int main()
 {
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    RevN(n);
    return 0;
 }