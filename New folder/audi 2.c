#include<stdio.h>
int main()
{
    int mileage=14;
    float worth_of_petrol,petrol_price,fuel,distance;
    scanf("%f%f",&worth_of_petrol,&petrol_price);
    fuel=worth_of_petrol/petrol_price;
    distance=fuel*mileage;
    printf("distance is %f",distance);
    if(distance>=100)
    {
         printf("yes car can travel\n");
    }
    else
    {
         printf("no car cannot travel");
    }
    return 0;
}
