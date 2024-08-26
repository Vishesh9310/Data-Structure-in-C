#include<stdio.h>
#include<stdlib.h>

#define max 10
int size=0;

struct node{
    int data;
    struct node* next;
};

struct node* rear=NULL;
struct node* front=NULL;

struct node* enqueue(){
    if(size>max-1){
        printf("\nOverflow...\n");
    }else{
        int value;
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter value:");
        scanf("%d",&value);
        newnode->data=value;
        if(front==NULL){
            newnode->next=NULL;
            rear=newnode;
            front=newnode;
        }else{
            newnode->next=rear;
            rear=newnode;
        }
        size++;
    }
}

void update(){
    int value;
    printf("Enter value:");
    scanf("%d",&value);
    struct node* temp=rear;
    while(temp!=NULL){
        if(temp->data==value){
            int new_value;
            printf("Enter new value:");
            scanf("%d",&new_value);
            temp->data==new_value;
        }
        temp=temp->next;
    }
    printf("\n");
}

void print_queue(){
    struct node* temp=rear;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    enqueue();
    enqueue();

    print_queue();
    
    update();

    print_queue();

    return 0;
}