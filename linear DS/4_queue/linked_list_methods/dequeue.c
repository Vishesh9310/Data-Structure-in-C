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

struct node* dequeue(){
    if(size==-1){
        printf("\nUnderflow...\n");
    }else{
        struct node* temp=rear;
        struct node* pre=NULL;
        while(temp->next!=NULL){
            pre=temp;
            temp=temp->next;
        }
        front=pre;
        pre->next=NULL;
        free(temp);
        size--;
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

    printf("before dequeue...\n");
    print_queue();
    
    dequeue();

    printf("after dequeue...\n");
    print_queue();

    return 0;
}