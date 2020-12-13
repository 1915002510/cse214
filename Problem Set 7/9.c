/*
Define a function to reverse the Linked List.(Don't use recursion)
Display both List before and after reversing.

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
node *reverse_list(node *list);
int main()
{
    node *head = NULL;

    head = create_list();

    printf("Before Reversing : \n");
    print_list(head);


    head = reverse_list(head);
    printf("After Reversing : \n");
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
    printf("\n\n");
}

node *reverse_list(node* list1)
{
    node *first, *current, *temp;
    first = list1;
    current = list1->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }
    return first;
}
