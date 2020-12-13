/*
Define a "Create" function to declare a Linked List with four node using dynamic memory allocation.
Print the complete Linked List after calling create function.

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
node *create_list();
void print_list(node *temp);
int main()
{
    node *head = NULL;

    head = create_list();

    print_list(head);


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

void print_list(node *temp)
{
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
