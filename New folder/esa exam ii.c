#include <stdio.h>
#include <string.h>
#define SIZE 10
struct queue
{
    int Age[SIZE];
    int front,rear;
};

void enqueue(struct queue *qptr,int data)
{
    if(qptr->rear==SIZE-1)
        printf("Queue overflow\n");
    else
    {
        qptr->rear++;
        qptr->Age[qptr->rear]=data;
    }
}

int dequeue(struct queue *qptr)
{
    if(qptr->front==qptr->rear)
        return -1;
    else
    {
        qptr->front++;
        return qptr->Age[qptr->front];
    }
}

void display_queue(struct queue *qptr)
{
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
    {
        for(int i=(qptr->front+1);i<=qptr->rear;i++)
            printf("%d ",qptr->Age[i]);
    }
}
void count(struct  queue *qptr,int a,int b)
{
    int i,c=0;
    float avg;

    for(i=a; i<=b; i++)
    {
       if(qptr->Age>=18&&qptr->Age<=25)
    printf("10%discont to custmers");
 else
    printf("disount not appicable");
        c++;
    }
      printf("count all tickets is: %d\n",c);
}
int main()
{

    struct queue q,*qptr;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int n,data,m;
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&data);
            enqueue(qptr,data);
        }
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            data=dequeue(qptr);
            if(data==-1)
                 printf("Queue underflow\n");
             else
                  printf("Dequeued %d\n",data);
        }
        printf("Queue after dequeue is:\n");
        display_queue(qptr);
    }
    else
        printf("Cannot perform operations\n");
    return 0;
}
