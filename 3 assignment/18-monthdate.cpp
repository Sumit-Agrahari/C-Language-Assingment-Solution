#include<stdio.h>
int main()
{
    int month;
    printf("Enter month : ");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==9||month==11)
        printf("month is 31 days");
    else if(month==2)
        printf("month is 29 days or 28 days");
    else
        printf("month is 30 days");

return 0;
}