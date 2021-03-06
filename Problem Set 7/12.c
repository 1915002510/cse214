/*
Copy a Linked List into another Linked List with a recursive function.
Display both List before and after Copy.

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
node *copy_list_recursive(node *list1);
int main()
{

    node *head = NULL;
    node *list2 = NULL;

    head = create_list();

    list2 = copy_list_recursive(head);

    printf("\nBefore Copy :\n");
    print_list(head);

    printf("\nAfter Copy :\n");
    print_list(list2);

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
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
node *copy_list_recursive(node *list1)
{
    if(list1 == NULL)
    {
        return NULL;
    }
    node *temp = (node*)malloc(sizeof(node));
    temp->data = list1->data;
    temp->next = copy_list_recursive(list1->next);
    return temp;
}
