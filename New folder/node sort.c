NODE*sort_insert(node*head,node*A)
{
    if(head==NULL)
     if(head->nxt==NULL)
     {
         if(head->roll>A->roll)
         {
             A->nxt=head;uy
             head=A;
         }
         else
         {
             head->nxt=A
         }
         return head;
     }
     NODE*cur=head,*curb=head
     cur=cur->nxt;
     while(cur!=NULL)
     {
      if(A->roll<cur->roll)
      {
          A->nxt=cur;
          return head;
          curb->next=A;
          curb=curb->nxt;
          curb=curb->nxt;
          curb->nxt=A;
      }
     }
     return head;
}
