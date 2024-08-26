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

void isempty(){
    if(rear==-1){
        printf("queue is empty...\n");
    }else{
        printf("queue is not empty...\n");
    }
}

int main(){
    enqueue();
    enqueue();

    isempty();

    print_queue();

    return 0;
}