#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
# define SIZE 10
struct stack
{
    int num[SIZE];
    int top;
};
void push_coins(struct stack *sptr,int data)
{
    if(sptr->top==SIZE-1)
        printf("stack overflow\n");
    else
    {
        sptr->top++;
        sptr->num[sptr->top]=data;
    }
}
int pop_coins(struct stack *sptr)
{
    int data;
    if(sptr->top==-1)
        return -1;
    else
    {
        data=sptr->num[sptr->top];
        sptr->top--;
        return data;
    }
}
void display_data(struct stack*sptr)
{
    if(sptr->top==-1)
        printf("stack is empty\n");
    else
    {
        for(int i=sptr->top;i>=0;i--)
        {
            printf("%d\n",sptr->num[i]);
        }
    }
}
void count_data(struct stack *sptr)
{
    int data,c1=0,c2=0,c5=0,c10=0;
    if(sptr->top==-1)
        printf("stack is empty\n");
    else
    {
        while(sptr->top!=-1)
        {
            data=pop_coins(sptr);
            if(data==1)
            {
                c1++;
            }
            else if(data==2)
            {
                c2++;
            }
            else if(data==5)
            {
                c5++;
            }
            else if(data==10)
                c10++;
          }
        printf("Denomination 1 coins: %d\n",c1);
        printf("Denomination 2 coins: %d\n",c2);
        printf("Denomination 5 coins: %d\n",c5);
        printf("Denomination 10 coins: %d\n",c10);

    }
}
int main()
{
struct stack *sptr,st;
    sptr=&st;
    sptr->top=-1;
    int i,n,data;
    scanf("%d",&n);
    if(n>0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&data);
            push_coins(sptr,data);
        }
        printf("Coins in Stack are:\n");
        display_data(sptr);
        printf("\n");
        count_data(sptr);
    }
    else
        printf("No coins.\n");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
