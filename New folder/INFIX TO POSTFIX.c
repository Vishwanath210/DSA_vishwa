#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
# define SIZE 100
struct stack
{
   char data[SIZE];
    int top;
};
void push(struct stack*sptr,char opr)
{
    if(sptr->top==SIZE-1)
        printf("Stack overflow");
    else
        sptr->data[++sptr->top]=opr;
}
char pop(struct stack*sptr)
{
    if(sptr->top==-1)
        return '\0';
    else
        return (sptr->data[sptr->top--]);
}
char peek(struct stack*sptr)
{
    if(sptr->top==-1)
        return '\0';
    else
        return (sptr->data[sptr->top]);
}
int precedence(char ch)
{
    switch(ch)
    {
        case '#':return 0;
            break;
        case '(':return 1;
            break;
             case '+':
            case '-':return 2;
            break;
        case '*':
        case '/':
        case '%':return 3;
        case '^':return 4;
    }
    return -1;
}
void convertion(struct stack *sptr,char infix[SIZE])
{
    char postfix[SIZE],ch,temp;
    int i=0,j=0;
    push(sptr,'#');
    while((ch=infix[i++])!='\0')
    {
        if(ch=='(')
            push(sptr,ch);
        else if(isalnum(ch))//operand
            postfix[j++]=ch;
        else if(ch == ')')
        {
            while(sptr->data[sptr->top]!='(')
                postfix[j++]=pop(sptr);
            temp=pop(sptr);
        }
        else
        {
            while(precedence(peek(sptr))>=precedence(ch))
            {
                postfix[j++]=pop(sptr);
            }
            push(sptr,ch);
        }
    }
    while(sptr->data[sptr->top]!='#')
    {
        postfix[j++]=pop(sptr);
    }
        postfix[j]='\0';
    printf("Given Infix Expression: %s\n",infix);
    printf("Postfix Expression: %s\n",postfix);

}
int main()
{
    struct stack *sptr,st;
    sptr=&st;
    sptr->top=-1;
    char infix[SIZE];
    scanf("%s",infix);
    convertion(sptr,infix);
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
