#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    if(97<=a&&122>=a)
        printf("lowercase alphabet");
    else if(65<=a&&90>=a)
        printf("uppercase alphabet");
    else if(0<=a&&9>=a)
        printf("digit");
    else
    printf("special case");
return 0;
}