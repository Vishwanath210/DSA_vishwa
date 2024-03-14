#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char name[20],srn[20];
    int rollno;
    struct node *link;
}*NODE;

NODE create_node()
{
    NODE new_node;
    new_node=(NODE)malloc(sizeof(struct node));
    if(new_node==NULL)
        printf("memory not allocated\n");
    else
    {
        printf("enter the data\n");
        scanf("%s%s%d",new_node->name,new_node->srn,&new_node->rollno);
        new_node->link=NULL;
    }
   return new_node;
}

NODE insert_front(NODE head)
{
    NODE new_node;
    new_node=create_node();
    if(head==NULL)
        head=new_node;
    else
    {
        new_node->link=head;
        head=new_node;
    }
    return head;
}

NODE display(NODE head)
{
    NODE cur;
    if(head==NULL)
        printf("list empty\n");
    else
    {
        cur=head;
        while(cur!=NULL)
        {
           printf("%s\t%s\t%d\n",cur->name,cur->srn,cur->rollno);
           cur=cur->link;
        }
    }
    return head;
}

NODE delete_end(NODE head)
{
    NODE prev,cur;
    if(head==NULL)
        printf("list empty\n");
    else if(head->link==NULL)
    {
        printf("%s\t%s\t%d\n",head->name,head->srn,head->rollno);
        free(head);
        head=NULL;
    }
    else
    {
        prev=NULL;
        cur=head;
        while(cur->link!=NULL)
        {
            prev=cur;
            cur=cur->link;
        }
        printf("%s\t%s\t%d\n",cur->name,cur->srn,cur->rollno);
        free(cur);
        prev->link=NULL;

    }
    return head;
}

NODE delete_front(NODE head)
{
    NODE cur;
    if(head==NULL)
        printf("list empty\n");
    else if(head->link==NULL)
    {
        printf("\n%s\t%s\t%d\n",head->name,head->srn,head->rollno);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        printf("%s\t%s\t%d\n",head->name,head->srn,head->rollno);
        head=head->link;
        free(cur);
    }
    return head;
}

int count_nodes(NODE head)
{
    int c=0;
    NODE cur;
    if(head==NULL)
        c=0;
    else
    {
        cur=head;
        while(cur!=0)
        {
            c++;
            cur=cur->link;
        }
    }
    return c;
}

void search_node(NODE head)
{
    char key_srn[20];
    int status;
    NODE cur;
    if(head==NULL)
        printf("list empty\n");
    else
    {
        cur=head;
        printf("enter the key_srn\n");
        scanf("%s",key_srn);
        while(cur!=NULL)
        {
            if(strcmp(cur->srn,key_srn)==0)
            {
                status=1;
                break;
            }
            cur=cur->link;
        }
        if(status==1)
            printf("\n%s\t%s\t%d\n",cur->name,cur->srn,cur->rollno);
    }
}

void display_same_name(NODE head)
{
      char key_name[20];
      NODE cur;
      if(head==NULL)
        printf("list empty\n");
      else
      {
          cur=head;
          printf("enter name to be searched\n");
          scanf("%s",key_name);
          while(cur!=0)
          {
              if(strcmp(cur->name,key_name)==0)
              {
                  printf("\n%s\t%s\t%d\n",cur->name,cur->srn,cur->rollno);
              }
              cur=cur->link;
          }
      }

}

int main()
{
    NODE head=NULL;
     int count;
    while(1)
    {
        printf("enter 1.insert 2.display  3.delete_end 4.delete_front 5.count nodes 6.search_nodes 7.dis_same name 8.exit\n");
        printf("\nenter your choise\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=insert_front(head);
                   printf("\ninsert end successful\n");
                   break;
            case 2:display(head);
                    break;
            case 3:head=delete_end(head);
                    break;
            case 4:head=delete_front(head);
                    break;
            case 5:count=count_nodes(head);
                   printf("\nthe number of nodes are %d\n",count);
                   break;
            case 6:search_node(head);
                    break;
            case 7:display_same_name(head);
                    break;
            case 8:exit(0);
            default:printf("invalid choice\n");
                     break;
        }
    }
    return 0;
}
