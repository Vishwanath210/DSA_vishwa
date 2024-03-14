#include<stdio.h>
int main()
{
    int time;
    float simple_interest,rate,total_amount,amount;
    printf("enter the amount to deposit\n");
    scanf("%f",&amount);
    printf("enter the rate\n");
    scanf("%f",&rate);
    printf("enter the time in years\n");
    scanf("%d",&time);
    simple_interest=(amount*rate*time)/100;
    total_amount=simple_interest+amount;
    printf("simple interest is %f\n",simple_interest);
    printf("total_amount is %f\n",total_amount);
}
