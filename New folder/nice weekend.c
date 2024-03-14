#include<stdio.h>
int main()
{
    char day;
    printf("Enter the character of day");
    scanf("%c",&day);
    if(day=='F'||day=='f')
    {
    printf("have a nice weekend!");
    }
    else
    {
    printf("have a nice day");
    }
    return 0;
    }
