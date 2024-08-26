#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void print_list(struct node *head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void update_value(struct node* head,int value,int new_value){
    struct node* temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            temp->data=new_value;
        }
        temp=temp->next;
    }
}

int main(){
    int value,new;
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* first=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));

    head->data=32;
    head->next=first;
    first->data=56;
    first->next=second;
    second->data=62;
    second->next=third;
    third->data=26;
    third->next=fourth;
    fourth->data=65;
    fourth->next=NULL;

    print_list(head);

    printf("Enter value:");
    scanf("%d",&value);
    printf("Enter new value:");
    scanf("%d",&new);
    update_value(head,value,new);

    print_list(head);

    return 0;
}