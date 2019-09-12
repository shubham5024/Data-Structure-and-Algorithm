#include <stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*first=NULL;


void create(int a[],int size)
{
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=a[0];
 first->next=NULL;
 last=first;

    for(int i=1;i<size;i++)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=a[i];
            t->next=NULL;
            last->next=t;
            last=t;
        }
}

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