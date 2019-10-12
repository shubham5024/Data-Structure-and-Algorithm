#include <stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*first=NULL;




void display(struct Node *p)
{
   while(p)
   {
   printf("%d ",p->data);
   p=p->next;
   }
}


int main()
{
   int a[]={1,3,5,6,7,8};
   int size=6;
   create(a,size);
   display(first);
}
