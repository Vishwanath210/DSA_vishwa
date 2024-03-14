#include<stdio.h>
//function prototype
void display_natural_nos(int n);
int sum_natural_nos(int n);
int factorial(int n);
int main()
{
    int n,sum,res;
    printf("enter value of n \n");
    scanf("%d",&n);
    if(n>0)
    {
        display_natural_nos(n);//fun call
        printf("sum of natural nos is %d\n",sum);
        sum=sum_natural_nos(n);
        printf("factorial of %d is %d\n",n, res);
        res=factorial(n);
    }
    else
        print("n should be positive\n");
        return 0;
}
//function definition
void display_natural_nos(int n);

