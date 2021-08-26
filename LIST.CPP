#include<iostream.h>
#include<conio.h>
struct Node
{
  int x;
  struct Node *next;
};
Node *fst=NULL,*curr,*tmp;
void addFirst()
{
   tmp = new Node();
   cout<<"\n\n\tPlz Enter value for Node : ";
   cin>>tmp->x;
   tmp->next = fst;
   fst = tmp;
   cout<<"\n\n Node Successfully Inserted....";
}

void addLast()
{
   tmp = new Node();
   cout<<"\n\n\tPlz Enter value for Node : ";
   cin>>tmp->x;
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
   cout<<"\n\n Node Successfully Inserted....";
}
void disp()
{
   curr = fst;
   cout<<"\n\n\nValues in List - ";
   while(curr!=NULL)
   {
      cout<<curr->x<<", ";
      curr = curr->next;
   }
}
void main()
{
  char c;
  while(1)
  {
     clrscr();
     cout<<"\n\n\n\n\t\t1. Add New Node in beginning \n\n\t\t2. Add new Node in end. \n\n\t\t3. List of all Nodes.\n\n\t\t0. for exit\n\n\t Plz Enter ur Choice : ";
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

