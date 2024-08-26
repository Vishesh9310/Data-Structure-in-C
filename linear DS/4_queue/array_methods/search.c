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

void search(){
    if(rear==-1){
        printf("queue is empty...\n");
    }else{
        int value;
        printf("Enter searching value:");
        scanf("%d",&value);
        for(int i=rear;i>=front;i--){
            if(queue[i]==value){
                printf("value is found...");
            }
        }
    }
}

int main(){
    enqueue();
    enqueue();
    
    print_queue();

    search();

    return 0;
}