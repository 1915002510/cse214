/*
Implement a “Delete Value” function to delete a value (key) from the Linked List.
Take input the delete ‘key’ from user. (Check Underflow and Not Found)

Name: Sanower Hossain Rabbi.
ID: 1915002510
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
  int data;
  node *next;
};
node *delete_value(node *temp, int key);
node *create_linked_list();
void print_all_node(node *temp);
int main(){
  node *head = NULL;
  int value;

  head = create_linked_list();

  print_all_node(head);

  printf("Delete Element : ");
  scanf("%d",&value);
  head = delete_value(head, value);

  print_all_node(head);

    return 0;
}

node *delete_value(node *temp, int key){
    if (temp){
        node *head = temp, *prev = temp;
        while(temp){
            if(temp->data == key){
                if(head == temp){
                    head = temp->next;
                    free(temp);
                    return head;
                 }
                else{
                    prev->next = temp->next;
                    free(temp) ;
                    return head;
                 }
             }
            prev = temp;
            temp = temp->next;
         }
        printf("\nNot Found\n");
        return head;
     }
    else{
       printf("\n!!Linked List Underflow!!\n");
     }
    return temp;
 }


node* create_linked_list(){

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

void print_all_node(node *temp){
    while(temp){
      printf("%d ",temp->data);
      temp = temp->next;
     }
     printf("\n\n");
  }

