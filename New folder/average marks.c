#include<stdio.h>
int main()
{
    int marks1,marks2,marks3,total_marks;
    float avg_marks;
    printf ("enter the marks of 3 subjects");
    scanf("%d%d%d",&marks1,&marks2,&marks3);
    total_marks=(marks1+marks2+marks3);
    avg_marks=(float)total_marks/3;
    printf("total marks is %d\n",total_marks);
    printf("avg_marks is %f\n",avg_marks);
    return 0;
}
