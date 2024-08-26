#include<stdio.h>
#include<stdlib.h>

#define max 10
int queue[max];
int front=-1,rear=-1;

void enqueue(){
    if(rear==max-1){
        printf("Overflow...\n");
    }else{
        if(front==-1){
            front=0;
        }
        rear++;
        printf("Enter value:");
        scanf("%d",&queue[rear]);
    }
}

void print_queue(){
    if(rear==-1){
        printf("underflow...\n");
    }else{
        for(int i=rear;i>=front;i--){
        printf("%d ",queue[i]);
    }
    }
}

void update(){
    if(rear==-1){
        printf("queue is empty...\n");
    }else{
        int value;
        printf("Enter value:");
        scanf("%d",&value);
        for(int i=rear;i>=front;i--){
            if(queue[i]==value){
                int new_value;
                printf("Enter new value:");
                scanf("%d",queue[i]);
            }
        }
    }
}

int main(){
    enqueue();
    enqueue();
    
    print_queue();

    update();

    print_queue();

    return 0;
}