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
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();

    print_queue();

    return 0;
}