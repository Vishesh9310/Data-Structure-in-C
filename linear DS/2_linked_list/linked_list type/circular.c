#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traverse(struct node *head){
    struct node* node=head;
    while(node->next!=head){
        printf("%d ",node->data);
        node=node->next;
    }
    printf("%d",node->data);
    printf("\n");
}

int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    struct node* fifth=(struct node*)malloc(sizeof(struct node));
    struct node* sixth=(struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=second;
    
    second->data=11;
    second->next=third;
    
    third->data=21;
    third->next=fourth;
    
    fourth->data=31;
    fourth->next=fifth;
    
    fifth->data=41;
    fifth->next=sixth;
   
    sixth->data=51;
    sixth->next=head;

    printf("circular Linked list:\n");
    traverse(head);

    return 0;
}