/*
Implement a “Delete Back” function to delete the last(back) element of the Linked List.
(Check Underflow).

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
node *delete_back(node *temp);
node *create_linked_list();
void print_all_node_value(node *temp);
int main()
{
    node *head = NULL;
    head = create_linked_list();

    print_all_node_value(head);

    head = delete_back(head);

    print_all_node_value(head);

    return 0;
}
node *delete_back(node *temp)
{
    node *head = temp;

    if(head == NULL)
    {
        printf("\n!!Linked List Underflow!!\n");
    }
    else
    {
        while(temp->next->next)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
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
void print_all_node_value(node *temp)
{
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}
