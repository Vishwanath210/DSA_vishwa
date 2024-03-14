
#include<stdio.h>
#include<string.h>
int compute_length(char str[100])
{
    return strlen(str);
}
int main()
{
    char name[100];
    printf("enter name");
    fgets(name,100,stdin);
    printf("name is:%s\n",name);
    printf("length is %d\n",compute_length(name));
}
