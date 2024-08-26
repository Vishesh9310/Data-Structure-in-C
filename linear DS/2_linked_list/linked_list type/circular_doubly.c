#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* pre;
    struct node* next;
};

void pre_traverse(struct node* node){
    struct node* temp=node;
    while(temp->pre!=node){
        printf("%d ",temp->data);
        temp=temp->pre;
    }
    printf("%d ",temp->data);
    printf("\n");
}

void post_traverse(struct node* head){
    struct node* temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    printf("\n");
}

int main(){

    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    struct node* fifth=(struct node*)malloc(sizeof(struct node));
    struct node* sixth=(struct node*)malloc(sizeof(struct node));
    
    head->pre=sixth;
    head->data=1;
    head->next=second;
    second->pre=head;
    second->data=11;
    second->next=third;
    third->pre=second;
    third->data=21;
    third->next=fourth;
    fourth->pre=third;
    fourth->data=31;
    fourth->next=fifth;
    fifth->pre=fourth;
    fifth->data=41;
    fifth->next=sixth;
    sixth->pre=fifth;
    sixth->data=51;
    sixth->next=head;
    

    post_traverse(head);
    pre_traverse(sixth);

    return 0;
}