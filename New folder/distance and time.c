#include<stdio.h>
#include<math.h>
int main()
{
     int x1,y1,x2,y2,speed;
     float distance,time,s;
     printf("coordinate of mohan\n");
     scanf("%d%d",&x1,&y1);
     printf("coodrinate of sohan\n");
     scanf("%d%d",&x2,&y2);
     printf("enter speed\n");
     scanf("%d",&speed);
     s=pow((x2-x1),2)+pow((y2-y1),2);
     distance=sqrt(s);
     time=distance/speed;
     printf("distance\t%f\n",distance);
     printf("time is%f",time);
     return 0;
}
