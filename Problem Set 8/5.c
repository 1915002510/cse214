/*
Implement a "Delete Before" function to delete an element before a node with value 'key' of the
Linked List. Take input 'key' and new node value from user. (Check underflow and index out of range).

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
node *del_before(node *temp, int key);
node *create_linked_list();
void print_all_node(node *temp);
int main()
{
    node *head = NULL;
    int value;

    head = create_linked_list();

    print_all_node(head);

    printf("Delete Element : ");
    scanf("%d",&value);
    head = del_before(head, value);

    print_all_node(head);

    return 0;
}

node *del_before(node *H, int info)
{
    node *t,*t2,*t3;
    t=H;
    if(H == NULL)
    {
        printf("\n!!Linked List Underflow!!\n");
    }
    else if(info==H->data)
    {
        printf("\n!!Index out of range!!\n\n");
    }
    else
    {
        if(info==H->next->data)
        {
            t3=H;
            H=H->next;
            free(t3);
        }
        else
        {
            while(t->next->next->data!=info && t->next->next!=NULL)
            {
                t=t->next;
            }
            if(t->next->next->data==info)
            {
                t2=t->next;
                t->next=t->next->next;
                free(t2);
            }
        }
    }
    return H;
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

