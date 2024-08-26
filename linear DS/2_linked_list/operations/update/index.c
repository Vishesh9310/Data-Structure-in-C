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

void update_index_value(struct node* head,int index,int new_value){
    struct node* temp=head;
    int count=1;
    while(count!=index){
        temp=temp->next;
        count++;
    }
    temp->data=new_value;
}

int main(){
    int value,index;
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

    printf("Enter index:");
    scanf("%d",&index);
    printf("Enter value:");
    scanf("%d",&value);
    update_index_value(head,index,value);

    print_list(head);

    return 0;
}