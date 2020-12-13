/*
Define an "Empty" function to check whether the Linked List is empty or not.

Name: Sanower Hossain Rabbi.
ID: 1915002510
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node
{
    int data;
    node *next;
};

int is_empty(node *temp);
node *create_list();

int main()
{
    node *head = NULL;

    head = create_list();

    if(is_empty(head) == 1)
    {
        printf("\n!!Linked List is Empty!!\n");
    }

    else if(is_empty(head) == 0)
    {
        printf("\nLinked List is Not Empty\n");
    }


    return 0;
}
node* create_list()
{

    node *a,*b,*c,*d;
    node *head;

    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));
    d=(node*)malloc(sizeof(node));

    head=a;

    a->data=1;
    a->next=b;
    b->data=2;
    b->next=c;
    c->data=3;
    c->next=d;
    d->data=4;
    d->next=NULL;

    return a;
}

int is_empty(node *temp)
{
    if(temp == NULL)
    {
        return 1;
    }

    return 0;
}
