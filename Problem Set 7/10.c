/*
Define a function to reverse the Linked List using a recursive function.
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


    printf("After Reversing : \n");
    print_list_reverse(head);
    printf("\n\n");

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
void print_list_reverse(node *temp)
{
    if (temp != NULL)
    {
        print_list_reverse(temp->next);
        printf("%d ", temp->data);
    }
}
