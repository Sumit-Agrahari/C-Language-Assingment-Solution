#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    if('a'<=a&&'z'>=a)
        printf("lowercase alphabet");
    if('A'<=a&&'Z'>=a)
        printf("uppercase alphabet");
return 0;
}