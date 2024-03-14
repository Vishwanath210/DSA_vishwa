#include<stdio.h>
int main()
{
    float substance,boliging_point;
    scanf("%f",&boliging_point);
    if(boliging_point>(100-(0.05*100))&&boliging_point<(100+(.05*100)))
        printf("substance is water");
    else if(boliging_point>(357-(0.05*357))&&boliging_point<(357+(0.05*357)))
        printf("subatnce is mercury");
    else if(boliging_point>(1187-(0.05*1187))&&boliging_point<(1187+(0.05*1187)))
        printf("substance is copper");
    else if(boliging_point>(2193-(0.05*2193))&&boliging_point<(2193+(0.05*2193)))
        printf("substance is silver");
    else if(boliging_point>(2600-(0.05*2660)))
        printf("subsatance is gold");
    return 0;
}
