#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print(struct node *node){
    while(node!=0){
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));

    head->data=32;
    head->next=first;
    first->data=13;
    first->next=second;
    second->data=54;
    second->next=NULL;

    printf("Singly Linked list:\n");
    print(head);

    return 0;
}