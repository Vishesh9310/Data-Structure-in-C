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

int search_ele(struct node* head, int value){
    struct node* temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

int main(){
    int value;
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
    // search_ele(head,value);

    if(search_ele(head,value)){
        printf("value: %d found...\n",value);
    }else{
        printf("value: %d is not in the list...\n",value);
    }

    return 0;
}