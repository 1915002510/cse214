/*
Define a function to print single node (Address, Value,and Next address) of the Linked List
and do the same as problem 1.(Use 'typedef' keyword ,Don't use DMA).

Name: Sanower Hossain Rabbi.
ID: 1915002510
*/

#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
void print_single_node(struct Node *temp);
int main()
{
    struct Node a, b, c;
    struct Node *head = &a;

    a.data = 10;
    a.next = &b;

    b.data = 15;
    b.next = &c;

    c.data = 20;
    c.next = NULL;

    while(head != NULL)
    {
        print_single_node(head);
        head = head->next;
    }

    return 0;
}

void print_single_node(struct Node *temp)
{
    printf("%d \t %d \t %d \n\n",temp, temp->data, temp->next);
}
