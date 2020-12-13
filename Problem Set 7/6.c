/*
Define a function to display the nth element of the Linked List.
Take input 'n' from user. (Check index out of range)[let, the first element n=1].

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
void print_list_n(node *temp, int n);
int is_empty(node *temp);
node *create_list();
int main()
{
    node *head = NULL;
    int n;

    head = create_list();

    if(is_empty(head) == 1)
    {
        printf("\n!!Linked List is Empty!!\n");
    }

    else if(is_empty(head) == 0)
    {
        printf("Enter n : ");
        scanf("%d",&n);

        if(n > 4)
        {
            printf("\n!!Index Out of Range!!\n");
        }
        else if(n <= 0)
        {
            printf("\n!!Invalid Index!!\n");
        }
        else
        {
            print_list_n(head, n);
        }
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
void print_list_n(node *temp, int pos)
{
    int n =1;
    while(n <= pos)
    {
        printf("%d ",temp->data);
        temp = temp->next;
        n++;
    }
    printf("\n");
}


int is_empty(node *temp)
{
    if(temp == NULL)
    {
        return 1;
    }
    return 0;
}
