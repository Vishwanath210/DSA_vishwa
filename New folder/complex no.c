#include<stdio.h>
struct complex
{
    float real,imaginary;
};
int main ()
{
struct complex c1,c2,c3;
struct complex*ptr1,*ptr2,*ptr3;
ptr1=&c1;
ptr2=&c2;
ptr3=&c3;
read_number(ptr1);
read_number(ptr2);
add_number(ptr1,ptr2,ptr3);
display_number(ptr1);
display_number(ptr2);
display_number(ptr3);
return 0;
}
void read_number(struct complex *p1)
{
    printf("enter a complex number");
    scanf("%f%f",&p1->real,&p1->imaginary);
}
void display_number(struct complex *p2)
{
    printf("the complex number is \n");
     printf("%f+%f i\n",p2->real,p2->imaginary);
     if(p2->imaginary<0)
        printf("%f%fi\n",p2->real,p2->imaginary);
     else
        printf("%f+%fi\n",p2->real,p2->imaginary);
}
void add_number(struct complex *p1,struct complex*p2,struct complex*p3)
{
    p3->real=p1->real+p2->real;
    p3->imaginary=p1->imaginary+p2->imaginary;
}

