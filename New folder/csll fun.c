#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* createnode()
{
    struct node *newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        scanf("%d",&newnode->data);
        newnode->link=newnode;
    }
    return newnode;
}
struct node* insertfrontcsll(struct node *head)
{
    struct node *newnode=NULL,*cur=NULL;
    newnode=createnode();
    if(head==NULL)
        head=newnode;
    else
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        newnode->link=head;
        cur->link=newnode;
        head=newnode;
    }
    return head;
}
void displaycsll(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("Empty");
    else
    {
        cur=head;
        do
        {
            printf("%d ",cur->data);
            cur=cur->link;
        }
        while(cur!=head);
    }
}
struct node* insertposition(struct node *head,int p)
{
    struct node *newnode=NULL,*cur=head;
    int count=0;
    newnode=createnode();
    count=count_nodes(head);
    if(head==NULL&&p==1)
        head=newnode;
    else if(p==1)
    {
        while(cur->link!=head)
            cur=cur->link;
        newnode->link=head;
        cur->link=newnode;
        head=newnode;
    }
    else if(p>=count+1)
    {
        while(cur->link!=head)
            cur=cur->link;
        cur->link=newnode;
        newnode->link=head;
    }
    else
    {
       for(int i=1;i<p-1;i++)
           cur=cur->link;
        newnode->link=cur->link;
        cur->link=newnode;
    }
    return head;
}
struct node* deleteposition(struct node *head,int q)
{
    struct node *cur=head,*prev=NULL,*temp=NULL;
    int count=count_nodes(head);
    if(head==NULL)
        return NULL;
    else if(head->link==head&&q==1)
    {
        free(head);
        head=NULL;
    }
    else if(q==1)
    {
        while(cur->link!=head)
            cur=cur->link;
        cur->link=head->link;
        temp=head;
        head=head->link;
        free(temp);
    }
    else if(q==count)
    {
        while(cur->link!=head)
        {
           prev=cur;
           cur=cur->link;
        }
        prev->link=head;
        free(cur);
    }
    else if(q>count)
        return head;
    else
    {
        for(int i=1;i<q;i++)
        {   prev=cur;
            cur=cur->link;
        }
        prev->link=cur->link;
        free(cur);
    }
    return head;
}
int count_nodes(struct node *head)
{
    int count=0;
    struct node *cur=head;
    if(head==NULL)
        return count;
    else
    {
        while(cur->link!=head)
        {
            count++;
            cur=cur->link;
        }
    }
    return count;
}
int main() {
 struct node *head=NULL;
    int n,p,q;
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
           head=insertfrontcsll(head);
        printf("Circular list is: ");
          displaycsll(head);
        scanf("%d",&p);
        head=insertposition(head,p);
        printf("\n\nCircular list after insertion is: ");
        displaycsll(head);
        printf("\n\nCircular list after deletion is: ");
        scanf("%d",&q);
        head=deleteposition(head,q);
        displaycsll(head);
    }
    else
        printf("Invalid input");
    return 0;
}
