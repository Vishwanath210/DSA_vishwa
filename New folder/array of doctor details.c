
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct doctor
{
    char name[20],spec[20],hospital[20];
    int in_hr,in_min,out_hr,out_min;
    int diff_hr,diff_min;
}DOCTOR;
void read (DOCTOR *dptr,int n)
{
    int i;
    printf("enter doctor details is \n");
    printf("Name,spec,hospital,in_time,out_time");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s%d%d%d",dptr->name,dptr->spec,dptr->hospital,&dptr->in_hr,&dptr->in_min,&dptr->out_hr,&dptr->out_min);
        dptr++;
    }
}
void display(DOCTOR *dptr,int n)
{
     int i;
    printf("doctor details are \n");
    printf("Name , spec, hospital, in_time, out_time");
    for(i=0;i<n;i++)
    {
    printf("%s ,%s ,%s ,%d ,%d ,%d");
    }
}
void comput_duration(DOCTOR *dptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        (dptr+i)->diff_hr=(dptr+i)->out_hr-(dptr+i)->in_hr;
        (dptr+i)->diff_min=(dptr+i)->out_min-(dptr+i)->in_min;
        if ((dptr+i)->diff_min<0)
        {
            (dptr+i)->diff_hr--;
            (dptr+i)->diff_min=60+(dptr+i)->diff_min;
        }

    }
}
void search(DOCTOR *dptr,int n)
{
  int i,status=0;
  for(i=0i<n;i++)
  {
      if(stremp(dptr+i)->name,sname==0)
      {
          status=1;
          index=i;
          break;
      }
  }
  if (status==1)
    printf("%s %s %s %d %d %d %d %d %d \n",(dptr+index)->name,(dptr+index)->spec,(dptr+index)->hospital,&(dptr+index)->in_time,&(dptr+index)->out_time);
    else
        printf("no doctor name found ");
  }
int main()
{
    int n;
    D*pd;
    char name[20];
    pritnf("enter number of doctor details to store");
    scanf("%d",&n);
    pd=(D*)malloc(n*size of )
}
