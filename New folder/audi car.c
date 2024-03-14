#include<stdio.h>
int main()
{
     int mileage;
     float worth_of_petrol,petrol_price,fuel,distance;
     mileage=14;
     printf("enter worth of petrol and petrol price");
     scanf("%f",&worth_of_petrol);
     scanf("%f",&petrol_price);
     fuel=worth_of_petrol/petrol_price;
     distance=fuel*mileage;
     printf("distance travelled by car is %f",distance);
     return 0;
}
