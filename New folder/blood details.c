#include<stdio.h>
struct blood
{
    char name[20],place[13],blood_type[10],status[5];
    long mobile_no;
};
struct blood read_details(struct blood s);
void display_details(struct blood s);
int main()
{
    struct blood s;
    printf("enter blood details\n");
    s=read_details(s);
    printf("the blood details are\n");
    display_details(s);
    return 0;
}
struct blood read_details(struct blood s)
{
printf("enter the name\n");
scanf("%s",s.name);
printf("enter the place\n");
scanf("%s",s.place);
printf("enter the blood type\n");
scanf("%s",s.blood_type);
printf("enter the mobile no\n");
scanf("%ld",&s.mobile_no);
printf("enter the status\n");
scanf("%s",s.status);
return s;
}
void display_details(struct blood s)
{
    printf("name:%s\n",s.name);
    printf("place:%s\n",s.place);
    printf("blood type:%s\n",s.blood_type);
    printf("mobile no:%d\n",s.mobile_no);
    printf("status:%s\n",s.status);
}

