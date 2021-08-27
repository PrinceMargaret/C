#include<stdio.h>
struct Node
{
  int x;
  struct Node *next;
};
struct Node *fst=NULL,*curr,*tmp;
void addFirst()
{
   tmp = (struct Node*) malloc(sizeof(tmp));
   printf("\n\n\tPlz Enter value for Node : ");
   scanf("%d",&tmp->x);
   tmp->next = fst;
   fst = tmp;
   printf("\n\n Node Successfully Inserted....");
}

void addLast()
{
   tmp = (struct Node*) malloc(sizeof(tmp));
   printf("\n\n\tPlz Enter value for Node : ");
   scanf("%d",&tmp->x);
   tmp->next = NULL;
   if(fst==NULL)
      fst = tmp;
   else
   {
     curr = fst;
     while(curr->next!=NULL) // loop for - control jump on last node
       curr = curr->next;
     curr->next = tmp;
   }
   printf("\n\n Node Successfully Inserted....");
}


void disp()
{
   curr = fst;
   printf("\n\n\nValues in List - ");
   while(curr!=NULL)
   {
      printf("%d, ",curr->x);
      curr = curr->next;
   }
}
void main()
{
  char c;
  while(1)
  {
     clrscr();
     printf("\n\n\n\n\t\t1. Add New Node in beginning \n\n\t\t2. Add new Node in end. \n\n\t\t3. List of all Nodes.\n\n\t\t0. for exit\n\n\t Plz Enter ur Choice : ");
     c = getche();
     if(c=='1')
       addFirst();
     if(c=='3')
       disp();
     if(c=='2')
       addLast();
     if(c=='0')
       break;
     getch();
  }
}

