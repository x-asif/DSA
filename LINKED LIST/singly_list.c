#include<stdio.h>
#include<stdlib.h>
    struct node
    {
        int data;
        struct node* next;
    };
struct node*head=NULL;
void insertbeign(int n)
{
    struct node *p;
    p=(struct node*)malloc(sizeof (struct node));
    p->data =n;
    p->next = head;
    head=p;
}
int main()
{
    insertbeign(10);
    insertbeign(30);
    insertbeign(40);
    struct node *q = head;
while (q != NULL)
{
    printf("%d", q ->data);
    q = q ->next;
}
    
    return 0;
    
}