#include<stdio.h>
int main()
{
    float earthquake_information,n;
    scanf("%f",&n);
    if(5.0)
        printf("little or no damage");
    else if(n>=5.0&&n<5.5)
        printf("serious damage");
    else if(n>=5.5&&n<6.5)
        printf("serious damage wall may crack or fall");
    else if(n>=6.5&&n<7.5)
        printf("diaster houses and building may collaspe");
    else if(n>=7.5)
        printf("catastrophe most building destroved");
    return 0;
}
