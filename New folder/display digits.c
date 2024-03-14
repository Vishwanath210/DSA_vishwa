#include<stdio.h>
void display_digits(int num);
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    display_digits (num);//function call
    return 0;
}
//function defintion
void display_digits(int num)
{
    int rem;
    while (num!=0)
    {
        rem=num%10;
        printf("%d\n",rem);
        num=num/10;
    }
}
