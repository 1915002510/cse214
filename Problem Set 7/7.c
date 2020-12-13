/*
Define a "Search" function to find a 'key' (take input 'key' from user).
Print "Found" if the search 'key' is found in the Linked List otherwise print "Not Found".

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
void find_key(node *temp, int key);
void print_list(node *temp);
int is_empty(node *temp);
node *create_list();
int main()
{
    node *head = NULL;
    int key;

    head = create_list();

    if(is_empty(head) == 1)
    {
        printf("\n!!Linked List is Empty!!\n");
    }
    else if(is_empty(head) == 0)
    {
        print_list(head);

        printf("\nEnter Key : ");
        scanf("%d",&key);

        find_key(head, key);
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

void print_list(node *temp)
{
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void find_key(node *temp, int key)
{
    int count = 0;

    while(temp)
    {
        if(key == temp->data)
        {
            count++;
        }
        temp = temp->next;
    }
    if(count == 0)
    {
        printf("\nNot Found\n");
    }
    else
    {
        printf("\nFound\n");
    }
}

int is_empty(node *temp)
{
    if(temp == NULL)
    {
        return 1;
    }
    return 0;
}
