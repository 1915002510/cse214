/*
Implement a “Delete At” function to delete the nth element of the Linked List.
Take input ‘n’ from user.(Check Underflow and index out of range) (Let, for the first element n = 1).

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
node *delete_at(node *temp, int pos);
node *create_linked_list();
void print_all_node(node *temp);
int main()
{
    node *head = NULL;
    int position;

    head = create_linked_list();

    print_all_node(head);

    printf("Delete Position : ");
    scanf("%d",&position);
    head = delete_at(head, position);

    print_all_node(head);

    return 0;
}
node *delete_at(node *temp, int pos)
{
    while(temp)
    {
        if(pos > 4 || pos < 1)
        {
            printf("\n!!Index out of range!!\n");
            return NULL;
        }
        else
        {
            if(pos == 1)
            {
                node *new_head = NULL;
                new_head = temp->next;
                free(temp);
                return new_head;
            }
            else
            {
                node *head = temp;
                node *prev, *next;
                int i = 1;
                while(i < pos)
                {
                    prev = temp;
                    temp = temp->next;
                    i++;
                }
                prev->next = temp->next;
                free(temp) ;
                return head;
            }
        }
    }
    printf("\n!!Linked List Underflow!!\n");
    return NULL;
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

