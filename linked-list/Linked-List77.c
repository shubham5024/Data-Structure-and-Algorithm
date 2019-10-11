/////Traverse The Linked List-
// 1.Create a Linked list 
// 2.Display the Linked List 
// 3.count the sum in linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{ 
    int data;
    struct Node *next;
    /* data */
}*first=NULL;



void create(int A[],int b)
{
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

    for(int i=1;i<b;i++)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=A[i];
            t->next=NULL;
            last->next=t;
            last=t;
        }
}

void display(struct Node *p)
{
    int k=0;
    while(p)
    {
        k=k+p->data;
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\nSum of the element in a linked list %d",k);
}

int main()
{
    int A[]={1,3,5,6};
    create(A,4);
    display(first);
    return 0;
}