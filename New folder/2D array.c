#include<stdio.h>
void read(float rain[2][12])
{
 int i,j;
 for(i=0;i<2;i++)
 for(j=0;j<12;j++)
 {
 scanf("%f",&rain[i][j]);
 }
 return;
 }
void statistics_comp(float rain[2][12])
{
 int i,j;
float s[2]={0,0};
 for(i=0;i<2;i++)
 {
 for(j=0;j<12;j++)
 {
  s[i]=s[i]+rain[i][j];
  }
}
  printf("Total rainfall this year %f",s[0]);
  printf("Total rainfall previous year %f",s[1]);
 printf(" Average monthly rainfall for this year %f",s[1]/12.0);
 printf("Average monthly rainfall for last year %f",s[1]/12.0);
 return ;
}
 int main()
 {
float rain[2][12];
read(rain);
statistics_comp(rain);
}
