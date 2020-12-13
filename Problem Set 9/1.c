/*
Implement an “Insert Front” function to insert an element at the beginning (front) Linked List.

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
node *insert_front(node *temp, int value);
node *create_linked_list();
void print_all_node(node *temp);
int main()
{
    node *head = NULL;
    int value;

    head = create_linked_list();

    print_all_node(head);


    head = insert_front(head, 20);

    print_all_node(head);

    return 0;
}

node *insert_front(node *temp, int value)
{
    node *new_head = malloc(sizeof(node));
    new_head->data = value;
    new_head->next = temp;

    return new_head;
}


node* create_linked_list()
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
void print_all_node(node *temp)
{
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}



