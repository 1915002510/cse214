/*
Implement an “Insert Back” function to insert an element at the end (back) of the Linked List.

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
node *insert_back(node *temp, int value);
node *create_linked_list();
void print_all_node(node *temp);
int main()
{
    node *head = NULL;
    int value;

    head = create_linked_list();

    print_all_node(head);


    head = insert_back(head, 200);

    print_all_node(head);

    return 0;
}

node *insert_back(node *temp, int value)
{
    node *head = temp;
    node *new_back = (node*)malloc(sizeof(node));
    new_back->data = value;
    new_back->next = NULL;

    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = new_back;
    return head;
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



