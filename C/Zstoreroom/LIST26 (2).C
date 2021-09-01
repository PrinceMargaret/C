#include<stdio.h>
struct Node
{
  int x; // for node value
  struct Node *next; // for hold the ref of next node of same type.
};
struct Node *fst = NULL, *curr, *tmp,*pptr;
void addFirst()
{
    tmp = (struct Node *) malloc(sizeof(tmp));
    printf("\n\n\n Plz Enter Node Value : ");
    scanf("%d",&tmp->x); // enter value for node with runtime input
    tmp->next = fst;
    fst = tmp;
    printf("\n\n Node Successfully Inserted...");
}
void addLast()
{
    tmp = (struct Node *) malloc(sizeof(tmp));
    printf("\n\n\n Plz Enter Node Value : ");
    scanf("%d",&tmp->x); // enter value for node with runtime input
    tmp->next = NULL;
    if(fst==NULL)
      fst = tmp;
    else
    {
      curr = fst;
      while(curr->next!=NULL) // loop for jump on last node
	curr = curr->next;
      curr->next = tmp;
    }
    printf("\n\n Node Successfully Inserted...");
}
void disp()
{
   if(fst==NULL)
     printf("\n\n\n Sorry ur List is Empty.");
   else
   {
     printf("\n\n\n  Elements in List r - ");
     curr = fst;
     while(curr!=NULL)
     {
	printf("%d, ",curr->x);
	curr = curr->next;
     }
   }
}
void del()
{
   int n,flag = 0;
   if(fst==NULL)
     printf("\n\n\n Sorry ur List is Empty... ");
   else
   {
     disp();
     printf("\n\n\n Plz Enter Node value for delete : ");
     scanf("%d",&n);
     pptr = curr = fst;
     while(curr!=NULL) // while list is not empty.
     {
       if(n==curr->x) // if node exist.
       {
	 if(fst==curr) // if selected node is the 1st Node
	   fst = curr->next;
	 else // if selected node is the mid or last node.
	   pptr->next = curr->next;
	 free(curr);
	 flag = 1;
	 break;
       }
       pptr = curr;
       curr = curr->next;
     }
     if(flag)
       printf("\n\n Node Successfully Deleted.");
     else
       printf("\n\n Sorry Node not found...");
   }
}
void addMid()
{
   int n;
   if(fst==NULL)
      printf("\n\n\n Sorry ur List is Empty... ");
   else
   {
     disp();
     printf("\n\n Plz Enter Node value for add new Node just after that particular Node : ");
     scanf("%d",&n);
     curr = fst;
     while(curr!=NULL) // while list is not empty.
     {
       if(n==curr->x) // if node exist.
       {
	  tmp = (struct Node *)malloc(sizeof(tmp));
	  printf("\n Plz Enter Node value : ");
	  scanf("%d",&tmp->x);
	  tmp->next = curr->next;
	  curr->next = tmp;
	  printf("\n\nNode Successfully Inserted...");
	  break;
       }
       curr = curr->next;
    }
  }
}
void main()
{
   char c;
   while(1)
   {
     clrscr();
     printf("\n\n\t\t1. Add New Node in Beginning.\n\n\t\t2. Add New Node in Last\n\n\t\t3. Add New Node in Mid \n\n\t\t4. List of All Node Values. \n\n\t\t5. Delete Existing Node \n\n\t\t0. Exit\n\n\t Plz Enter ur Choice : ");
     c = getche();
     if(c=='1')
	addFirst();
     if(c=='2')
	addLast();
     if(c=='3')
	addMid();
     if(c=='4')
	disp();
     if(c=='5')
	del();
     if(c=='0')
       break;
     getch();
   }
}


