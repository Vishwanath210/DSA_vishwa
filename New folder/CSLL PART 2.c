#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node *link;
};

struct node* create_node()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Memory not allocated\n");
    else
    {
        scanf("%d",&newnode->data);
            newnode->link=newnode;
    }
    return newnode;
}


struct node* insert_end_csll(struct node *head)
{
    struct node *newnode=create_node();
    struct node *cur=NULL;
    if(head==NULL)
        head=newnode;
    else
    {
        cur=head;
        while(cur->link!= head)
            cur=cur->link;
        cur->link=newnode;
        newnode->link=head;
    }
    return head;
}


void display_list_csll(struct node *head)
 {
     struct node *cur;
     if(head==NULL)
        printf("Empty.\n");
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
struct node* delete_end_csll(struct node *head)
 {
     struct node *cur=NULL,*prev=NULL;
     if(head==NULL)
       return NULL;
     else if(head->link==head)
     {

        free(head);
        head=NULL;
     }
     else
        {
            cur=head;
         while(cur->link!=head)
         {
             prev=cur;
             cur=cur->link;
         }

           prev->link=head;
            free(cur);
        }
    return head;
 }

struct node* delete_front_csll(struct node *head)
 {
     struct node *cur=NULL,*temp=NULL;
     if(head==NULL)
       return NULL;
     else if(head->link==head)
     {

        free(head);
        head=NULL;
     }
     else
        {
            cur=head;
         while(cur->link!=head)
             cur=cur->link;
         temp=head;
         cur->link=head->link;
         head=head->link;
         free(temp);
        }
    return head;
 }


int main() {
    struct node *head=NULL;
    int n;
    scanf("%d",&n);
    if(n>=1)
    {
         for(int i=0;i<n;i++)
            head=insert_end_csll(head);
         printf("Circular list is: ");
         display_list_csll(head);
        printf("\n");
        head=delete_end_csll(head);
        head=delete_front_csll(head);
        printf("\nFinal circular list is: ");
        display_list_csll(head);
    }
    else
        printf("Invalid input\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
